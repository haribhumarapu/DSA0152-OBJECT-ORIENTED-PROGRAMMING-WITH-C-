#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
public:
    int studentID;
    string course;

    void setStudentDetails(int id, string c) {
        studentID = id;
        course = c;
    }

    void displayStudent() {
        // Calling display function of base class
        display();
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    // Create an object of the derived class
    Student student;

    // Set details using base class method
    student.setDetails("John Doe", 20);

    // Set student-specific details using derived class method
    student.setStudentDetails(12345, "Computer Science");

    // Display the details of the student
    student.displayStudent();

    return 0;
}

