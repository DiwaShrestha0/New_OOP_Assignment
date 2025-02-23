/*1. Write a program in C++ to find the perfect numbers between 1 and 500. 
The perfect numbers between 1 to 500 are: 
6 
28 
496 
A perfect number is a positive integer that is equal to the sum of its positive proper 
divisors, that is, divisors excluding the number itself.  
For instance, 6 has proper divisors 1, 2 and 3, and 1 + 2 + 3 = 6, so 6 is a perfect 
number.*/
#include <iostream>
using namespace std;

int main() {
    cout << "The perfect numbers between 1 to 500 are: " << endl;
    for (int num = 1; num <= 500; num++) {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            cout << num << endl;
        }
    }
    return 0;
}