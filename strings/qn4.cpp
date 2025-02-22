/*4. Write a C++ program to check if a given string is a Palindrome or not. 
A palindrome is a word, number, phrase, or other sequence of characters which 
reads the same backward as forward, such as madam, racecar. 
Example: 
Sample Input: madam 
Sample Output: True*/
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    if (isPalindrome(input)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}