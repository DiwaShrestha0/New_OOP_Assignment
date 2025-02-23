/*4. Write a program in C++ to display the first n terms of the Fibonacci series. 
Sample Output: 
Input number of terms to display: 10 
Here is the Fibonacci series upto to 10 terms: 
0 1 1 2 3 5 8 13 21 34 
*/
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Input number of terms to display: ";
    cin >> n;

    cout << "Here is the Fibonacci series upto " << n << " terms: ";

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << " ";
    }
    return 0;
}