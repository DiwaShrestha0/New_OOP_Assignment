/*3. Write a C++ program to make such a pattern like a right angle triangle with the 
number increased by 1. 
Sample Output: 
Input number of rows: 4                                                                                      
1                                                                                   
2 3                                                                                                          
4 5 6                                                                                                        
7 8 9 10*/
#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cout << "Input number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << num << " ";
            ++num;
        }
        cout << endl;
    }

    return 0;
}