#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct person
{

    string accountnumber;
    int pin;
    string name;
    long long  Phone;
    float palance;
  
};

void Readperson1(person &m)
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
       cout << "Enter Account palance?\n";
       cin >> m.palance;
}


void SavepersonToFile(person m)
{
    fstream myFile;
    myFile.open("Clints.txt", ios::app);
    if (myFile.is_open())
    {
        myFile << "clint for Saving is:\n";
        myFile << m.accountnumber << "#//#";
        myFile << m.pin << "#//#";
        myFile << m.name << "#//#";
        myFile << m.Phone << "#//#";
        myFile << m.palance << endl;
        myFile.close();
    }
}

int main()
{
   

    char ansewr = 'Y';
    while (ansewr == 'Y' || ansewr == 'y')
    {
        person n;
        Readperson1(n);

        
       
        SavepersonToFile(n);
        
        cout << "\nClient added Succfully, do you want to add more clients? (Y/N)\n";
        
        cin >> ansewr;
        cout << "\n";
    }
    
}