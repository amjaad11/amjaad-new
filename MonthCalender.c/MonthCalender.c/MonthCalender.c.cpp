#include <iostream>
#include <iomanip>
using namespace std;
bool isLeadYear(short year)
{
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

short Numberofdaysinmonth(short month, short year)
{
    if (month == 2)
    {
        return isLeadYear(year) ? 29 : 28;
    }

    return (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) ? 31 : 30;
}
int dayofweek(short month, short year)
{
    int day = 1;
    int totalday = day - 1;
    for (int i = 1; i < year; i++)
    {
        totalday += isLeadYear(i) ? 366 : 365;
    }
    for (int i = 1; i < month; i++)
    {

        totalday += Numberofdaysinmonth(i, year);
    }
    return  totalday % 7;
}
short ReadYear()
{
    short year;
    cout << "please enter a year to check";
    cin >> year;
    return year;
}
short Readmonth()
{
    short month;
    cout << "please enter a month to check";
    cin >> month;
    return month;
}

string monthshortname(short month)
{
    string months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct" , "Nov" , "Dec"};
    return (months[month - 1]);
}
void days(short month, short year)
{
    printf("\n-----------------%s-----------------------\n", monthshortname(month).c_str());

    cout <<  setw(6) << "Sun";
    cout << setw(6) << "Mon";
    cout << setw(6) << "Tue";
    cout << setw(6) << "wed";
    cout << setw(6) << "Thu";
    cout << setw(6) << "Fri";
    cout << setw(6) << "Sat\n";
    int start = dayofweek(month, year);
    for (int i = 0; i < start; i++)
 
        cout << setw(6) << "";
    
    for (int i = 1; i <= Numberofdaysinmonth(month, year); i++)
    {
        cout << setw(6) << i;
        if ((i + start) % 7 == 0)
            cout << endl;
    }
}
int main()
{
    short year = ReadYear();
    short month = Readmonth();

    cout << "\t\t" << month << "/" << year << endl;

    days(month, year);
}
