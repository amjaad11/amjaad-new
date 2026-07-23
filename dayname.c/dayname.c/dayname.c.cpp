#include <iostream>
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
int dayofweek(short day, short month, short year)
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
short Readday()
{
    short day;
    cout << "please enter a year to check";
    cin >> day;
    return day;
}
string dayshortname(short dayofweekorder)
{
    string arrdayname[] = {
        "Sun", "Mon", "Tue", "wed", "Thu", "Fri", "Sat" };
    return arrdayname[dayofweekorder];
}
int main()
{
    short year = ReadYear();
    short month = Readmonth();
    short day = Readday();
    short res = dayofweek(day, month, year);
    cout << "\nData         :" << day << "/" << month << "/" << year << "\n";
    cout << "day order: " << res << endl;
    cout << "day is: " << dayshortname(res);
}
