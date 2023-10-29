#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;



short readNumber(string msg)
{
    short num;

    cout << msg;
    cin >> num;

    return num;
}

bool isLeapYear(short year)
{
    return (year % 400 == 0 || ((year % 4 == 0) && (year % 100 != 0)));
}

short numberOfDaysInMonth(short year, short month)
{
    if (month == 2)
    {
        if (isLeapYear(year))
            return  29;
        else
            return  28;
    }

    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return  31;

    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;

    else
        return 0;
}

short daysFromBegingOfYear(short year, short month, short day)
{
    short numberOfDays = 0;
        
    for (short mon = 1; mon < month; mon++)
    {
        numberOfDays += numberOfDaysInMonth(year, mon);
    }
    numberOfDays += day;

    return numberOfDays;
}


int main()
{
    short day = readNumber("\n\nPlease Enter a Day? ");
    short month = readNumber("\n\nPlease Enter a Month? ");
    short year = readNumber("\n\nPlease Enter a Year? ");

    cout<<"\n\nNumber of Days from the begining of the year is: "<<daysFromBegingOfYear(year, month, day);

    system("pause>0");

    return main();

}