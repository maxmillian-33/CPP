/*Create a class Student with three data members name, age and address and
member functions read(), display() and getAge(). Write a C++ program to read
the data of n students and display the details of students whose age greater than
the average age.*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string address;

public:
    void read() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Address: ";
        cin >> address;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }

    int getAge() {
        return age;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student students[n];
    double totalAge = 0; // Initialize the total age as a double

    // Read data for each student and calculate total age
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Student " << i + 1 << ":" << endl;
        students[i].read();
        totalAge += students[i].getAge(); // Add age to totalAge
    }

    // Calculate the average age
    double averageAge = totalAge / n;

    // Display students whose age is greater than the average age
    cout << "\nStudents with age greater than the average age (" << averageAge << "):" << endl;
    for (int i = 0; i < n; ++i) {
        if (students[i].getAge() > averageAge) {
            students[i].display();
            cout << endl;
        }
    }

    return 0;
}
