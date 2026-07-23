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

short dayofweek(short day, short month, short year)
{
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

short MumberOfDaysFromTheBeginingOfTheYear(short day, short month, short year)
{
    short totaldays = 0;

    for (int i = 1; i <= month - 1; i++)
    {
        totaldays += Numberofdaysinmonth(i, year);
    }
    totaldays += day;
    return totaldays;
}

short Readay()
{
    short day;
    cout << "please enter a day to check";
    cin >> day;
    return day;
}

short Readmonth()
{
    short month;
    cout << "please enter a month to check";
    cin >> month;
    return month;
}

short ReadYear()
{
    short year;
    cout << "please enter a year to check";
    cin >> year;
    return year;
}

int main()
{
    short day = Readay();
    short month = Readmonth();
    short year = ReadYear();
    short day1 = dayofweek(day, month, year);
   
    cout <<  " Mumber Of Days From The Begining Of The Year is " << MumberOfDaysFromTheBeginingOfTheYear(day, month, year) << endl;
   

    cout << "Date for [" << MumberOfDaysFromTheBeginingOfTheYear(day, month, year) << "] is: " << day << "/" << month << "/" << year;
}





