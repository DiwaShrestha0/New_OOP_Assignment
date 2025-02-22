/*Write a program in C++ to display the numbers in reverse order. 
Sample Output: 
Input a number: 12345 
The number in reverse order is : 54321*/
#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;
    cout << "Input a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    cout << "The number in reverse order is : " << reversedNum << endl;
    return 0;
}