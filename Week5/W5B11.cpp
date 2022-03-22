#include <iostream>
#include <limits>
using namespace std;

bool isLeapYear(int year)
{
    return (
        ((year % 4 == 0) && (year % 100 != 0)) ||
        (year % 400 == 0)
    );
}

int lastDayOf(int month, int year)
{
    if (month == 2)
        return isLeapYear(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

struct Date {
    int day;
    int month;
    int year;

    Date& operator+=(int days)
    {

        int d = day + days;
        int lastDay = lastDayOf(month, year);
        while (d > lastDay)
        {
            d -= lastDay;
            if (++month == 13)
            {
                ++year;
                month = 1;
            }
            lastDay = lastDayOf(month, year);
        }
        day = d;
        return *this;
    }


};



int main() {
    Date date1;

    cout << "Enter the day, month, and year of the date" << endl;
    cin>>date1.day>>date1.month>>date1.year;
    if (date1.month < 1 || date1.month > 12 ||
           date1.day < 1 || date1.day > lastDayOf(date1.month, date1.year))
    {
        cout << "Invalidate date!" << endl;
    }

    date1 += 45;

    cout << "The date after adding 45 days is " << date1.day << "/" << date1.month << "/" << date1.year;
}
