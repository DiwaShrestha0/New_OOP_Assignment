/*Write a C++ program to swap the first and last digits of any number. 
Sample Output: 
Input any number: 12345 
The number after swapping the first and last digits are: 52341*/

#include<iostream>
using std::cout;
using std::cin;
int main(){
    int num, first_digit, last_digit, temp, new_num;
    cout<<"Enter any number: ";
    cin>>num;
    last_digit = num % 10;
    temp = num;
    while(temp >= 10){
        temp = temp / 10;
    }
    first_digit = temp;
    new_num = last_digit;
    temp = num / 10;
    while(temp >= 10){
        new_num = new_num * 10 + temp % 10;
        temp = temp / 10;
    }
    new_num = new_num * 10 + first_digit;
    cout<<"The number after swapping the first and last digits are: "<<new_num<<std::endl;
    return 0;
}