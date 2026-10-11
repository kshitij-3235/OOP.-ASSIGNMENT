#include <iostream>
using namespace std;


class Person 
{
    public:
        string name;
        int age;
        string contact;

    Person(string n, int a, string c) 
    {
        name = n;
        age = a;
        contact = c;
    }

    void displayPersonDetails() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Contact: " << contact << endl;
    }
};


class Student : public Person 
{
    public:
        int rollNumber;
        string branch;


    Student(string n, int a, string c, int roll, string br) 
        : Person(n, a, c) {
        rollNumber = roll;
        branch = br;
    }

    void displayStudentDetails() {
        displayPersonDetails(); // Reuses base class method
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    // Creating a Student object
    Student student1("Alice Smith", 20, "alice@email.com", 101, "Computer Science");

    cout << "--- Student Information ---" << endl;
    student1.displayStudentDetails();

    return 0;
}