/*2. Write a C++ program to implement a class called Date that has private member 
variables for day, month, and year. Include member functions to set and get these 
variables, as well as to validate if the date is valid. */
#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    bool isValidDate(int day, int month, int year) {
        if (year < 1 || month < 1 || month > 12 || day < 1) {
            return false;
        }
        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (isLeapYear(year)) {
            daysInMonth[1] = 29;
        }
        return day <= daysInMonth[month - 1];
    }

public:
    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            std::cerr << "Invalid date!" << std::endl;
        }
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void printDate() const {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    Date date;
    date.setDate(29, 2, 2020);
    date.printDate();
    return 0;
}