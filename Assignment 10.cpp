#include <isotream>

using namespace std;
template <typename T>

void compare(T marks1,T marks2)
{
    if (marks1>marks2)
    {
        cout << "\n  marks 1 Is Greater Which Is"<<marks1;
    }
else
{
 cout << "\n  marks 2 Is Greater Which Is"<<marks2;   
}        
}

int main()
{
    int marks1;
    int marks2;

    cout <<"\n Enter The Marks of marks1";
    cin >> marks1;
    cout <<"\n Enter The Marks of marks2";
    cin >> marks2;
    compare(maeks1,marks2);
    return
}
