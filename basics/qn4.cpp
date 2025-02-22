/*4. Write a C++ program to add up all the digits between two given integers. Add all the 
digits between 11 and 16 and it should be inclusive of the two numbers. 
Example: Add up all the digits between 39 and 41 is: 21 
Sample Data 
(5, 9) -> 35 
(12, 18) -> 42 
(39, 41) -> 21*/
#include<iostream>
using std::cout;
using std::cin;
int main(){
    int a, b, sum = 0;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for(int i = a; i <= b; i++){
        sum += i;
    }
    cout<<"Sum of all digits between "<<a<<" and "<<b<<" is: "<<sum<<std::endl;
    return 0;
}
