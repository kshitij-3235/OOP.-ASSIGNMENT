#include <iostream>
using namespace std;

class book
{
 public:
        string book_id;
        string book_name;
        string book_author;
        int price;
        int page's;
        


 void display()
 {
        cout<<"Book ID:"<<book_id<<endl;
        cout<<"Book 
Name:"<<book_name<<endl;
        cout<<"Book's Author:"<<book_author<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Page's of book:"<<page's<<endl;
         
        cout<<"------------------------"<<endl;
 }

 book()
 {
         book_id="00";
         book_name="Unregistered";
         book_author="Unknown";
         price=300;
         page's=70;
 }
 book(string a, string b, string c,int d,int e)
 {
         book_id=a;
         book_name=b;
         book_author=c;
         price=d;
         page's=e;
 }
};

 int main()
 {
        book b1;
        book b2("01","ABC","Charles");
        book b3;
        b1.display();
        b2.display();
        b3.display();
        return 0;
 }
