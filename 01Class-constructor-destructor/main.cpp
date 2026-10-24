#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Parameterized constructor
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
        cout << "Constructor called: Object created." << endl;
    }

    // User-defined function
    void displayDetails() {
        cout << "\nStudent Details" << endl;
        cout << "Name   : " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks  : " << marks << endl;
    }

    // Destructor
    ~Student() {
        cout << "\nDestructor called: Object destroyed." << endl;
    }
};

int main() {
    Student s1("Kedar", 62, 88.5);
    s1.displayDetails();

    return 0;
}
