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
            getline(ss, p.accountnumber, '#');
            getline(ss, p.pin, '#');

            getline(ss, p.name, '#');
            getline(ss, p.Phone, '#');

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

string ReadAccountNumber()
{
    string accountnumber;
    cout << "please enter Account Number? ";
    cin >> accountnumber;

    return accountnumber;
}
int main()
{

    person client;
    string acountnumber = ReadAccountNumber();
    if (findclientbyaccountNumber(acountnumber, client))
    {
        printClient(client);
    }
    else
    {
        cout << "\nClient Not Found.\n";
    }

    return 0;
}
