/*1. Write a C++ program that returns the elements in a vector that are strictly smaller 
than their adjacent left and right neighbours. 
Example: 
Original Vector elements: 
1 2 5 0 3 1 7 
Vector elements that are smaller than its adjacent neighbours: 
0 
1*/
#include <iostream>
#include <vector>

std::vector<int> findSmallerThanNeighbours(const std::vector<int>& vec) {
    std::vector<int> result;
    for (size_t i = 1; i < vec.size() - 1; ++i) {
        if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) {
            result.push_back(vec[i]);
        }
    }
    return result;
}

int main() {
    std::vector<int> vec = {1, 2, 5, 0, 3, 1, 7};
    std::vector<int> result = findSmallerThanNeighbours(vec);

    std::cout << "Original Vector elements: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector elements that are smaller than its adjacent neighbours: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}