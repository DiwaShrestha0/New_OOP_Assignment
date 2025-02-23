/*2. Write a C++ program to capitalize the first character of each element of a given 
string vector. Return the vector. 
Example: 
Original Vector elements: 
red green black white Pink 
Capitalize the first character of each vector element: 
Red Green Black White Pink */
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

std::vector<std::string> capitalizeFirstChar(std::vector<std::string> vec) {
    for (auto& str : vec) {
        if (!str.empty()) {
            str[0] = std::toupper(str[0]);
        }
    }
    return vec;
}

int main() {
    std::vector<std::string> vec = {"red", "green", "black", "white", "Pink"};
    std::vector<std::string> capitalizedVec = capitalizeFirstChar(vec);

    std::cout << "Capitalize the first character of each vector element: " << std::endl;
    for (const auto& str : capitalizedVec) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}