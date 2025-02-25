/*1. Write a program in C++ to display a pattern like a right angle triangle using an 
asterisk. 
Sample Output: 
Input number of rows: 5 
* 
** 
*** 
**** 
******/
#include <iostream>

int main() {
    int rows;
    std::cout << "Input number of rows: ";
    std::cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}