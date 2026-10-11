#include <iostream>
using namespace std;

class person
{
        public:
                int age;
                string nationality;

        void getPersonDetails()
        {
                cout<<"\nEnter Age: ";
                cin>>age;
                cout<<"Enter Nationality: ";
                cin>>nationality;
        }

        void displayPersonDetails()
        {
                cout<<"\nAge: "<<age<<endl;
                cout<<"Nationality: "<<nationality<<endl;
        }
};

class employee: public person
{
        public:

                int eID;
                string eName;
                float esalary;
        void getEmployeeDetails()
        {
                cout<<"Enter Employee ID: ";
                cin>>eID;
                cout<<"Enter Employee Name: ";
                cin>>eName;
                cout<<"Enter Employee salary: ";
                cin>>esalary;
        }

        void displayEmployeeDetails()
        {
                cout<<"Employee ID: "<<eID<<endl;

                cout<<"Employee Name: "<<eName<<endl;

                cout<<"Employee salary: "<<esalary<<endl;
        }
};

class hr:public employee
{
        public:
                string hDepartment;

        void getHrDetails()
        {

                cout<<"Enter HR's Department: ";
                cin>>hDepartment;
        }

        void displayHrDetails()
        {
                cout<<"HR's Department: "<<hDepartment<<endl;
        }
};

int main()
{
        hr h1;
        cout<<"\n======Enter HR's Details======\n";
        h1.getPersonDetails();
        h1.getEmployeeDetails();
        h1.getHrDetails();

        cout<<"\n======HR's Details======\n";
        h1.displayPersonDetails();
        h1.displayEmployeeDetails();
        h1.displayHrDetails();

        return 0;
}