#include <iostream>
using namespace std;


class Person 
{
    public:
        string name;
        string address;
        int age;
        string contact;

    Person(string n,string m, int a, string c) 
    {
        name = n;
        address = m;
        age = a;
        contact = c;
    }

    void displayPersonDetails() 
    {
        cout << "Name: " << name << endl;
        cout <<"Address:"<<address << endl;
        cout << "Age: " << age << endl;
        cout << "Contact: " << contact << endl;
    }
};


class Student : public Person 
{
    public:
        int rollNumber;
        string branch;


    Student(string n,string m, int a, string c, int roll, string br) 
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
    Student student1("Alice Smith","Lonikalbhour", 20, "alice@email.com", 101, "Computer Science");

    cout << "--- Student Information ---" << endl;
    student1.displayStudentDetails();

    return 0;
}
