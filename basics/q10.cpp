/* Write a C++ program to find the sum of an A.P. series. 
Sample Output: 
Input the starting number of the A.P. series: 1 
Input the number of items for the A.P. series: 8 
Input the common difference of A.P. series: 5 
The Sum of the A.P. series are : 
1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148 */
#include <iostream>
using namespace std;

int main() {
    int start, n, diff, sum = 0;
    cout << "Input the starting number of the A.P. series: ";
    cin >> start;
    cout << "Input the number of items for the A.P. series: ";
    cin >> n;
    cout << "Input the common difference of A.P. series: ";
    cin >> diff;

    cout << "The Sum of the A.P. series are : ";
    for (int i = 0; i < n; i++) {
        int term = start + i * diff;
        sum += term;
        cout << term;
        if (i < n - 1) {
            cout << " + ";
        }
    }
    cout << " = " << sum << endl;

    return 0;
}