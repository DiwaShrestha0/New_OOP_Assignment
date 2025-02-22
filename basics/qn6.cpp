/*6. Write a C++ program to compute the sum of the two given integers and count the 
number of digits in the sum value. */
#include <iostream>
#include <cmath>

int countDigits(int number) {
    if (number == 0) return 1;
    return std::log10(std::abs(number)) + 1;
}

int main() {
    int num1, num2, sum;

    std::cout << "Enter first integer: ";
    std::cin >> num1;

    std::cout << "Enter second integer: ";
    std::cin >> num2;

    sum = num1 + num2;
    int digitCount = countDigits(sum);

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Number of digits in the sum: " << digitCount << std::endl;

    return 0;
}