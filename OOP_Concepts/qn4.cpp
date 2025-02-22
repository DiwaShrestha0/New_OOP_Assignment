/*4. Write a C++ program to create a class called Triangle that has private member 
variables for the lengths of its three sides. Implement member functions to 
determine if the triangle is equilateral, isosceles, or scalene.*/
#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    bool isIsosceles() {
        return (side1 == side2 || side2 == side3 || side1 == side3);
    }

    bool isScalene() {
        return (side1 != side2 && side2 != side3 && side1 != side3);
    }
};

int main() {
    Triangle t1(3.0, 3.0, 3.0);
    Triangle t2(3.0, 4.0, 4.0);
    Triangle t3(3.0, 4.0, 5.0);

    cout << "Triangle t1 is ";
    if (t1.isEquilateral()) cout << "Equilateral";
    else if (t1.isIsosceles()) cout << "Isosceles";
    else if (t1.isScalene()) cout << "Scalene";
    cout << endl;

    cout << "Triangle t2 is ";
    if (t2.isEquilateral()) cout << "Equilateral";
    else if (t2.isIsosceles()) cout << "Isosceles";
    else if (t2.isScalene()) cout << "Scalene";
    cout << endl;

    cout << "Triangle t3 is ";
    if (t3.isEquilateral()) cout << "Equilateral";
    else if (t3.isIsosceles()) cout << "Isosceles";
    else if (t3.isScalene()) cout << "Scalene";
    cout << endl;

    return 0;
}