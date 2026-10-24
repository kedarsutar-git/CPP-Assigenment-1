#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks;

public:

    // Default Constructor
    Student()
    {
        name = "Unknown";
        rollNo = 0;
        marks = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized Constructor
    Student(string n, int r, float m)
    {
        name = n;
        rollNo = r;
        marks = m;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        name = s.name;
        rollNo = s.rollNo;
        marks = s.marks;
        cout << "Copy constructor called." << endl;
    }

    // Member function to display student details
    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }

    // Member function to update marks
    void updateMarks(float newMarks)
    {
        marks = newMarks;
        cout << "\nMarks updated successfully." << endl;
    }
};

int main()
{
    // Object using Default Constructor
    Student s1;
    s1.display();

    // Object using Parameterized Constructor
    Student s2("Kedar Sutar", 48, 79.5);
    s2.display();

    // Updating marks using member function
    s2.updateMarks(85);
    s2.display();

    // Object using Copy Constructor
    Student s3(s2);
    s3.display();

    return 0;
}