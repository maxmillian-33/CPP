/*Create a class Time with data members hour, minute and second and member
functions readTime(), displayTime() and an overloaded operator ‘+’. Write a
C++ program to find the sum of two Time objects. [use 24 hours format]*/

#include <iostream>

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Constructor to initialize Time objects
    Time() : hour(0), minute(0), second(0) {}

    // Member function to read the time from the user
    void readTime() {
        std::cout << "Enter time (HH:MM:SS): ";
        char colon;
        std::cin >> hour >> colon >> minute >> colon >> second;
    }

    // Member function to display the time
    void displayTime() {
        std::cout << "Time: ";
        if (hour < 10) {
            std::cout << "0";
        }
        std::cout << hour << ":";
        if (minute < 10) {
            std::cout << "0";
        }
        std::cout << minute << ":";
        if (second < 10) {
            std::cout << "0";
        }
        std::cout << second << std::endl;
    }

    // Overloaded + operator to add two Time objects
    Time operator+(const Time& other) {
        Time result;
        result.second = (second + other.second) % 60;
        int carry = (second + other.second) / 60;
        result.minute = (minute + other.minute + carry) % 60;
        carry = (minute + other.minute + carry) / 60;
        result.hour = (hour + other.hour + carry) % 24;
        return result;
    }
};

int main() {
    Time time1, time2, sum;

    std::cout << "Enter first time:" << std::endl;
    time1.readTime();

    std::cout << "Enter second time:" << std::endl;
    time2.readTime();

    sum = time1 + time2;

    std::cout << "Sum of times:" << std::endl;
    time1.displayTime();
    time2.displayTime();
    sum.displayTime();

    return 0;
}
