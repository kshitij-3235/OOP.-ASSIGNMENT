#include <iostream>
using namespace std;

class person
{
        public:
                int age;
                string nationality;

        void getPersonDetails()
        {
                cout<<"\nAge: "<<age;
                cout<<"\nNationality: "<<nationality;
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
                cout<<"\nEmployee ID: "<<eID;
                cout<<"\nEmployee Name: "<<eName;
                cout<<"\nEmployee salary: "<<esalary;
        }
};

class hr:public employee
{
        public:
                string hDepartment;

        void getHrDetails()
        {

                cout<<"\nHR's Department: "<<hDepartment<<endl;
        }
};

int main()
{
        cout<<"=====HR's Details=====";
        hr h1;
        h1.age=41;
        h1.nationality="Indian";
        h1.eID=1;
        h1.eName="Aryan";
        h1.esalary=98000;
        h1.hDepartment="Resources";
        h1.getPersonDetails();
        h1.getEmployeeDetails();
        h1.getHrDetails();
        return 0;
}