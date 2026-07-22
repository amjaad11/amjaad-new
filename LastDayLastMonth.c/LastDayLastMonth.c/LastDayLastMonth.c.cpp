


#include <iostream>
#include <iomanip>
using namespace std;

struct sdate
{
    short year;
    short month;
    short day;

};

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

sdate ReadFullDate()
{
    sdate Date;
    Date.day = Readay();
    Date.month = Readmonth();
    Date.year = ReadYear();

    return Date;
}


bool dayislastdayinmonth(sdate date)
{
   
    return (date.month == 12) ? true : false;

}
bool monthislastmonthinyear(sdate date)
{

    return  (date.day == Numberofdaysinmonth(date.month, date.year) ? true : false);
}
int main()
{
    sdate date = ReadFullDate();
   

    if (dayislastdayinmonth(date))
        cout << "\nyes, day is last day in month." << endl;
    else
        cout << "\nNo, day is not last day in month" << endl;


    if (monthislastmonthinyear(date))
        cout << "\nyes, Month is last month in year." << endl;
    else
        cout << "\nNo,  Month is not last month in year" << endl;
}
