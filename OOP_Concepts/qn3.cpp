/*3. Write a C++ program to implement a class called Student that has private member 
variables for name, class, roll number, and marks. Include member functions to 
calculate the grade based on the marks and display the student's information.*/
#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    float marks;

    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

public:
    void setData(const std::string& n, const std::string& c, int r, float m) {
        name = n;
        studentClass = c;
        rollNumber = r;
        marks = m;
    }

    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << studentClass << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
    }
};

int main() {
    Student student;
    student.setData("John Doe", "10th Grade", 23, 85.5);
    student.displayInfo();
    return 0;
}