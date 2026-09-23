#include <iostream>
using namespace std;

class student
{
 public:

  int Student_id;
  string Student_name;
  char Student_grade;
  int roll_no;

 student(int Student_id, string Student_name, char Student_grade, int roll_no)
 {
  this->Student_id=Student_id;
  this->Student_name=Student_name;
  this->Student_grade=Student_grade;
  this->Student_roll_no=roll_no;
 }
 void display()
 {
  cout<<"\nStudent ID:"<<Student_id;
  cout<<"\nStudnet Name:"<<Student_name;
  cout<<"\nStudnet Grade:"<<Student_grade;
  cout<<"\nStudent Roll No:"<<roll_no;
  cout<<"\n--------------------------";
 }
 };
 int main()
 {
  student s1(20260001,"Aaryan",'A',32);
  student s2(20260002,"Bhushan",'B',45);
  s1.display();
  s2.display();
  return 0;
 }