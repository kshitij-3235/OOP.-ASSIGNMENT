#include <iostream>
using namespace std;

class employee
{
    public:
        int emp_id;
        string emp_name;
        float emp_salary;

    void getdetails()
    {
        cout<<"Enter Employee ID: ";
        cin>>emp_id;
        cout<<"Enter Employee Name: ";
        cin>>emp_name;
        cout<<"Enter Employee Salary: ";
        cin>>emp_salary;
    }

    void displaydetails()
    {
        cout<<endl<<"Employee ID: "<<emp_id<<endl;
        cout<<"Employee Name: "<<emp_name<<endl;
        cout<<"Employee Salary: "<<emp_salary<<endl;
    }

    employee()
    {
        cout<<"Constructor was called."<<endl;
    }

    ~employee()
    {
        cout<<"Destructor was called."<<endl;
    }
};

int main()
{
    cout<<"====Employee Details===="<<endl;
    employee e1;
    e1.getdetails();
    e1.displaydetails();
    return 0;
}
