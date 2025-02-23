/*3. Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + … up to ‘n’ 
terms. 
Sample Output: 
Input number of terms: 5 
1 + 11 + 111 + 1111 + 11111 
The sum of the series is: 12345*/
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, term = 1;
    cout << "Input number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << term;
        if (i < n) {
            cout << " + ";
        }
        sum += term;
        term = term * 10 + 1;
    }

    cout << "\nThe sum of the series is: " << sum << endl;
    return 0;
}