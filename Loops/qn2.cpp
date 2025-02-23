/*2. Write a program in C++ to find the last prime number that occurs before the entered 
number. 
Input a number to find the last prime number occurs before the number: 50 
47 is the last prime number before 50*/
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Input a number to find the last prime number occurs before the number: ";
    cin >> n;

    for (int i = n - 1; i > 1; i--) {
        if (isPrime(i)) {
            cout << i << " is the last prime number before " << n << endl;
            break;
        }
    }

    return 0;
}