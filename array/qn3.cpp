/*3. Write a C++ program to find the k largest elements in a given array of integers.*/
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> findKLargestElements(vector<int>& arr, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    for (int num : arr) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }
    
    vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top());
        minHeap.pop();
    }
    
    sort(result.begin(), result.end(), greater<int>());
    return result;
}

int main() {
    vector<int> arr = {1, 23, 12, 9, 30, 2, 50};
    int k = 3;
    
    vector<int> kLargest = findKLargestElements(arr, k);
    
    cout << "The " << k << " largest elements are: ";
    for (int num : kLargest) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}