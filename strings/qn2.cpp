/*2. Write a C++ program to capitalize the first letter of each word in a given string. 
Words must be separated by only one space. 
Example: 
Sample Input: cpp string exercises 
Sample Output: Cpp String Exercises*/
#include <iostream>
#include <sstream>
#include <cctype>

std::string capitalizeFirstLetter(const std::string &str) {
    std::stringstream ss(str);
    std::string word, result;
    bool firstWord = true;

    while (ss >> word) {
        word[0] = std::toupper(word[0]);
        if (!firstWord) {
            result += " ";
        }
        result += word;
        firstWord = false;
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string output = capitalizeFirstLetter(input);
    std::cout << "Output: " << output << std::endl;

    return 0;
}