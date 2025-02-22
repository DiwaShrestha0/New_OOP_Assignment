/*1. Write a C++ program that accepts the user's first and last name and prints them in 
reverse order with a space between them. 
Input First Name: John 
Input Last Name: Doe 
Name in reverse is: Doe John */

#include<iostream>
using namespace std;
#include <cstring>

int main()
{
    string first_name;
    string last_name;
    cout<<"Enter your first name: ";
    cin>>first_name;
    cout<<"Enter your last name: ";
    cin>>last_name;
    cout<<"Reverse of your name is: ";
    cout<<last_name<<" "<<first_name<<endl;
    return 0;
}