/* Program File Name: Ch4_Ex1
Programmer: Frank Sonsini
Date : October 2026
Requirements :
    Write a program that inputs a month in numeric form, a day and a two-digit year.
    Validate that all 3 values are within their appropriate ranges.
    Calculate month x day.  If that result equals the year, output "Date is magic.". Else output "Date is not magic.".
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int month, day, year, result;

    cout << fixed;

    cout << "Please enter a month in numeric form, a day in that month and a two-digit year" << endl;
    cin >> month >> day >> year;

    if (month < 1 || month > 12)
        cout << "Your month value is not valid. Please run the program again and enter a month between 1 and 12." << endl;

    else if (month == 2 && (day < 1 || day > 29))
        cout << "Your day value for February is not valid.  Please run the program again and enter a day between 1 and 29 for February." << endl;

    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30))
        cout << "Your day value for April, June, September or November is not valid.  Please run the program again and enter a day between 1 and 30 for any of these months." << endl;

    else if (day < 1 || day > 31)
        cout << "Your day value for January, March, May, July, August, October or December is not valid.  Please run the program again and enter a day between 1 and 31 for any of these months." << endl;

    else if (year < 1 || year > 99)
        cout << "your year value is not in two-digit form. Please run the program again and enter a year between 1 and 99." << endl;

    else {


        result = month * day;

        if (result == year)
            cout << " This date is magic." << endl;
        else cout << "This date is not magic." << endl;

            }

    return(0);
}