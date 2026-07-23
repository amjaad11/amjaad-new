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

sdate DateAddDays(short days, sdate Date)
{
    short RemainingDays = days + MumberOfDaysFromTheBeginingOfTheYear(Date.day, Date.month, Date.year);
    short Monthday = 0;

    Date.month = 1;
    while (true)
    {
        Monthday = Numberofdaysinmonth(Date.month, Date.year);
        if (RemainingDays > Monthday)
        {
            RemainingDays -= Monthday;
            Date.month++;
            if (Date.month > 12)
            {
                Date.month = 1;
                Date.year++;
            }

        }
        else
        {
            Date.day = RemainingDays;
            break;
        }
    }

    return Date;
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

sdate ReadFullDate1()
{
    sdate Date;
    Date.day = Readay();
    Date.month = Readmonth();
    Date.year = ReadYear();

    return Date;
}
bool isdateonelessthendatetoo(sdate date, sdate date1)
{

    return (date.year == date1.year) ? true : false && (date.month == date1.month) ? true : false && (date.day == date1.day) ? true : false;
}
int main()
{
    sdate date = ReadFullDate();
    sdate date1 = ReadFullDate1();

    if (isdateonelessthendatetoo(date, date1))
        cout << "\nyes, Datel1 is equals to Date2.";
    else
        cout << "\nNo, Datel1 is Not equals To Date2.";

}
