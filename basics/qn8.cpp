/*8. Write a C++ program to compute the number of days in a month for a given year and 
month. 
Input Year: 2019 
Input Month: 04 
Number of days of the year 2019 and month 4 is: 30*/
#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}

int getDaysInMonth(int year, int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (isLeapYear(year))
                return 29;
            else
                return 28;
        default:
            return -1; // Invalid month
    }
}

int main() {
    int year, month;
    cout << "Input Year: ";
    cin >> year;
    cout << "Input Month: ";
    cin >> month;

    int days = getDaysInMonth(year, month);
    if (days != -1)
        cout << "Number of days of the year " << year << " and month " << month << " is: " << days << endl;
    else
        cout << "Invalid month entered." << endl;

    return 0;
}   