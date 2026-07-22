#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>
#include <sstream>
using namespace std;


struct person
{

    string accountnumber;
    string pin;
    string name;
    string Phone;
    string balance;
    bool Markfordelete = false;
};


vector<person> loadClientsFromFile()
{
    vector<person> clients;
    fstream myFile;
    myFile.open("Clients.txt", ios::in);

    if (myFile.is_open())
    {

        string line;
        while (getline(myFile, line))
        {
            person p;

            stringstream ss(line);
            string temp;
            getline(ss, p.accountnumber, '#');
            getline(ss, temp, '#');

            getline(ss, p.pin, '#');
            getline(ss, temp, '#');

            getline(ss, p.name, '#');
            getline(ss, temp, '#');

            getline(ss, p.Phone, '#');
            getline(ss, temp, '#');

            getline(ss, p.balance, '#');

            clients.push_back(p);

        }
        myFile.close();

    }
    else
    {
        cout << "File Not Opened";
    }
    return clients;
}


bool findclientbyaccountNumber(string accountnumber, person& client)
{

    vector<person> clients = loadClientsFromFile();
    for (person p : clients)
    {
        if (p.accountnumber == accountnumber)
        {
            client = p;
            return true;
        }
    }
    return false;
}
void printClient(person m)
{
    cout << "\nThe following are the client details:\n\n";
    cout << "account number  :" << m.accountnumber << endl;
    cout << "pin code        :" << m.pin << endl;
    cout << "name            :" << m.name << endl;
    cout << "phone           :" << m.Phone << endl;
    cout << "balance         :" << m.balance << endl;
}
void saveclientdatatofile(vector<person> clients)
{
    fstream myFile;
    myFile.open("clients.txt", ios::out);
    if (myFile.is_open())
    {
        for (person m : clients)
        {
            if (m.Markfordelete == false)
            {

                myFile << m.accountnumber << "#//#";
                myFile << m.pin << "#//#";
                myFile << m.name << "#//#";
                myFile << m.Phone << "#//#";
                myFile << m.balance << endl;

            }
        }
        myFile.close();
    }
}
bool updateaccountNumber(string accountnumber)
{

    person client;
    char answer;
    vector<person> clients = loadClientsFromFile();

    if (findclientbyaccountNumber(accountnumber, client))
    {
        printClient(client);
        cout << "\nAre you sure want update this client? y/n ? ";
        cin >> answer;
        if (tolower(answer) == 'y')
        {
            for (person& p : clients)
            {
                if (p.accountnumber == accountnumber)
                {
                    cout << "Enter pin: ";
                    cin >> p.pin;

                    cout << "Enter name: ";
                    cin >> p.name;

                    cout << "Enter phone: ";
                    cin >> p.Phone;

                    cout << "Enter balance: ";
                    cin >> p.balance;
                    break;
                }
            }

            saveclientdatatofile(clients);
            cout << "\nClient updated Successfully.\n";
            return true;
        }
    }

    else
    {
        cout << "\nClient with Account Number{" << accountnumber << "} Not Found.\n";
    }
    return false;
}
string ReadAccountNumber()
{
    string accountnumber;
    cout << "please enter Account Number? ";
    cin >> accountnumber;

    return accountnumber;
}

int main()
{

    updateaccountNumber(ReadAccountNumber());

    return 0;
}
