/*1. Write a C++ program to find the largest three elements in an array.*/
#include <iostream>
#include <climits>
using namespace std;

void findLargestThree(int arr[], int n) {
    if (n < 3) {
        cout << "Array should have at least three elements." << endl;
        return;
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    cout << "The largest three elements are " << first << ", " << second << ", and " << third << "." << endl;
}

int main() {
    int arr[] = {12, 13, 1, 10, 34, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLargestThree(arr, n);
    return 0;
}