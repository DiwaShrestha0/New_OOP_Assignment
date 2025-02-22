/*Write a C++ program that prints the three highest numbers from a list of numbers in 
descending order. */
#include<iostream>
#include<vector>
#include<algorithm>
using std::cout;
using std::cin;
using std::vector;
int main(){
    vector<int> numbers;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        numbers.push_back(temp);
    }
    sort(numbers.begin(), numbers.end(), std::greater<int>());
    cout<<"The three highest numbers are: ";
    for(int i = 0; i < 3; i++){
        cout<<numbers[i]<<" ";
    }
    cout<<std::endl;
    return 0;
}