/*1. Write a C++ program to reverse a given string. 
Example: 
Sample Input: helloworld 
Sample Output: dlrowolleh*/
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::reverse(input.begin(), input.end());

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}