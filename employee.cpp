#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int employeeID;
    string name;
    string department;
    float salary;

    void input()
    {
        cout << "Enter Employee Number: ";
        cin >> employeeID;

        cout << "Enter Employee Full Name: ";
        cin >> name;

        cout << "Enter Work Department: ";
        cin >> department;

        cout << "Enter Monthly Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\n--- Employee Information ---" << endl;
        cout << "Employee Number: " << employeeID << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Work Department: " << department << endl;
        cout << "Monthly Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;

    e1.input();
    e1.display();

    return 0;
}