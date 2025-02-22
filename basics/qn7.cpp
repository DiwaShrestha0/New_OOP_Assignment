/*7. For n = 10, write a C++ program that reads the integer n and prints its factorial. */
#include<iostream>
using std::cout;       
using std::cin;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact<<std::endl;
    return 0;
}