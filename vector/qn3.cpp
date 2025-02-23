/*3. Write a C++ program that takes a vector of strings and returns only those strings that 
contain a number(s). Return an empty vector if none. 
Example: 
Original Vector elements: 
red green23 1black white 
Find strings that contain a number(s) from the said vector: 
green23 1black*/
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

std::vector<std::string> findStringsWithNumbers(const std::vector<std::string>& vec) {
    std::vector<std::string> result;
    for (const auto& str : vec) {
        for (const auto& ch : str) {
            if (std::isdigit(ch)) {
                result.push_back(str);
                break;
            }
        }
    }
    return result;
}

int main() {
    std::vector<std::string> vec = {"red", "green23", "1black", "white"};
    std::vector<std::string> result = findStringsWithNumbers(vec);

    std::cout << "Find strings that contain a number(s) from the said vector: " << std::endl;
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}