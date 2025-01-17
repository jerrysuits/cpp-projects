//*****************************************************************************************************
//      Date Class Implementation File
//
//      This class implementation file defines the methods (member functions) of the Date class.
//
//      Other files required:
//          1.  Date.h - header file for Date class
//
//*****************************************************************************************************

#include "Date.h"     

//*****************************************************************************************************

Date::Date() {                                    // default constructor initializes member variables 
    day = 1;
    month = 1;
    year = 2000;
}

//*****************************************************************************************************

Date::~Date() { 
    cout << "\nDate object destroyed\n";
}

//*****************************************************************************************************

void Date::inputDate() {                         // checks for valid date (leap years, days in month) and sets date
    cout << "\nEnter Year: ";
    cin >> year;

    while (year < 2022 || year > 2100) {
        cerr << "\nInvalid\n\n";     
        cout << "Enter Year(2022- ): ";
        cin >> year;
    }

    setYear(year);

    cout << "Enter Month: ";
    cin >> month;

    while (month < 1 || month > 12) {
        cerr << "\nInvalid\n\n";
        cout << "Enter Month(1-12): ";
        cin >> month;
    }

    setMonth(month);

    cout << "Enter Day: ";
    cin >> day;

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) {
        while (day < 1 || day > 31) {
            cerr << "\nInvalid\n\n";
            cout << "Enter Day(1-31): ";
            cin >> day;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        while (day < 1 || day > 30) {
            cerr << "\nInvalid\n\n";
            cout << "Enter Day(1-30): ";
            cin >> day;
        }
    } else if (year % 4 == 0) {                                            // February :: tests leap years
        while (day < 1 || day > 29) {
            cerr << "\nInvalid\n\n";
            cout << "Enter Day(1-29): ";
            cin >> day;
        }
    } else {
        while (day < 1 || day > 28) {
            cerr << "\nInvalid\n\n";
            cout << "Enter Day(1-28): ";
            cin >> day;
        }
    }
    
    setDay(day);
}

//*****************************************************************************************************

void Date::displayDate() {
    cout << getMonth() << "/" << getDay() << "/" << getYear();     
}

//*****************************************************************************************************