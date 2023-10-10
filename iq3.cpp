/*Design a base class Person with data members name, address and
phone_number. Derive a class Employee with data member emp_number from
Person. Derive a class Manager with data members designation,
department_name and basic_salary from Employee. Write a CPP program to
accept all details of 'n' managers.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Base class Person
class Person {
protected:
    string name;
    string address;
    string phone_number;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter phone number: ";
        cin >> phone_number;
    }
};

// Derived class Employee from Person
class Employee : public Person {
protected:
    int emp_number;

public:
    void input() {
        Person::input(); // Call the input function of the base class
        cout << "Enter employee number: ";
        cin >> emp_number;
    }
};

// Derived class Manager from Employee
class Manager : public Employee {
protected:
    string designation;
    string department_name;
    double basic_salary;

public:
    void input() {
        Employee::input(); // Call the input function of the Employee class
        cout << "Enter designation: ";
        cin >> designation;
        cout << "Enter department name: ";
        cin >> department_name;
        cout << "Enter basic salary: ";
        cin >> basic_salary;
    }

    void display() {
        cout << "\nManager Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phone_number << endl;
        cout << "Employee Number: " << emp_number << endl;
        cout << "Designation: " << designation << endl;
        cout << "Department Name: " << department_name << endl;
        cout << "Basic Salary: " << basic_salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of managers: ";
    cin >> n;

    vector<Manager> managers;

    for (int i = 0; i < n; i++) {
        Manager manager;
        cout << "\nEnter details for Manager " << i + 1 << ":" << endl;
        manager.input();
        managers.push_back(manager);
    }

    cout << "\nManager Information:" << endl;
    for (int i = 0; i < n; i++) {
        managers[i].display();
        cout << "-----------------------" << endl;
    }

    return 0;
}
