/*2. Write a C++ program to find the second largest element in an array of integers.*/
#include <iostream>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        std::cout << "Array should have at least two elements" << std::endl;
        return INT_MIN;
    }

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        std::cout << "There is no second largest element" << std::endl;
        return INT_MIN;
    }

    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest != INT_MIN) {
        std::cout << "The second largest element is " << secondLargest << std::endl;
    }
    return 0;
}