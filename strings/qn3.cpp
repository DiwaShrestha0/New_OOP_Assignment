/*3. Write a C++ program to find the largest word in a given string. 
Example: 
Sample Input: C++ is a general-purpose programming language. 
Sample Output: programming */
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input = "C++ is a general-purpose programming language.";
    std::istringstream stream(input);
    std::string word;
    std::string largestWord;
    
    while (stream >> word) {
        if (word.length() > largestWord.length()) {
            largestWord = word;
        }
    }
    
    std::cout << "The largest word is: " << largestWord << std::endl;
    return 0;
}