#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;


struct person
{

    string accountnumber;
    int pin;
    string name;
    long long  Phone;
    string palance;

};

void Readperson1(person& m)
{
    cout << "Enter Account Number?\n";
    cin >> m.accountnumber;
    cout << "Enter PinCode?\n";
    cin >> m.pin;
    cin.ignore();

    cout << "Enter Name?";
    getline(cin, m.name);
    cout << "Enter Phone? ";
    cin >> m.Phone;
    cout << "Enter Account Balance ?\n";
    cin >> m.palance;
}


void SavepersonToFile(person m)
{
    fstream myFile;
    myFile.open("Clients.txt", ios::app);
    if (myFile.is_open())
    {
        myFile << "client for Saving is:\n";
        myFile << m.accountnumber << "#//#";
        myFile << m.pin << "#//#";
        myFile << m.name << "#//#";
        myFile << m.Phone << "#//#";
        myFile << m.palance << endl;
        myFile.close();
    }

}
void printHeader()
{
    cout << "---------------------------------------------------------------------------------\n";
    cout << "| " << left << setw(15) << "account Number";
    cout << "| " << setw(10) << "pin";
    cout << "| " << setw(25) << "name";
    cout << "| " << setw(12) << "Phone";
    cout << "| " << setw(16) << "Balance" << endl;
    cout << "---------------------------------------------------------------------------------\n";
}
void print(person m)
{

    cout << "| " << left << setw(15) << m.accountnumber;
    cout << "| " << left << setw(10) << m.pin;
    cout << "| " << left << setw(25) << m.name;
    cout << "| " << left << setw(12) << m.Phone;
    cout << "| " << left << setw(16) << m.palance << endl;
}
void AddClients()
{
    vector<person> clients;

    char answer = 'Y';

    while  (answer == 'Y' || answer == 'y')
    {
        person m;

        cout << "\nClient number: " << "\n";
        Readperson1(m);

        SavepersonToFile(m);
        clients.push_back(m);
        cout << "\nClient Added Successfully, do you want to add more clients? (Y/N)\n" << "\n";
        cin >> answer;
    }
    cout << "\n                      Client List (" << clients.size() <<  ") Client(s).\n";

    printHeader();

    for (int i = 0; i < clients.size(); i++)
    {
        print(clients[i]);
    }

}


int main()
{
    AddClients();
}