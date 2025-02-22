/*1. Write a C++ program to implement a class called Employee that has private 
member variables for name, employee ID, and salary. Include member functions to 
calculate and set salary based on employee performance.*/
#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(std::string empName, int empID) : name(empName), employeeID(empID), salary(0.0) {}

    // Function to set salary based on performance
    void setSalary(double performanceRating) {
        if (performanceRating >= 4.5) {
            salary = 100000; // Excellent performance
        } else if (performanceRating >= 3.5) {
            salary = 75000; // Good performance
        } else if (performanceRating >= 2.5) {
            salary = 50000; // Average performance
        } else {
            salary = 30000; // Below average performance
        }
    }

    // Function to display employee details
    void displayEmployeeDetails() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    Employee emp1("John Doe", 12345);
    emp1.setSalary(4.7);
    emp1.displayEmployeeDetails();

    Employee emp2("Jane Smith", 67890);
    emp2.setSalary(3.2);
    emp2.displayEmployeeDetails();

    return 0;
}