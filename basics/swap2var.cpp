/*2. Write a C++ program that swaps two variables without using a third variable. 
Sample Output: 
Input 1st number : 25 
Input 2nd number : 20 
After swapping the 1st number is : 20 
After swapping the 2nd number is : 25*/
#include<iostream>
using std::cout;
using std::cin;
int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swapping: a="<<a<<" b="<<b<<std::endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After swapping: a="<<a<<" b="<<b<<std::endl;
    return 0;
}