#include<iostream>
using namespace std;
class Student
{
    private:
    void school()
    {
    int rollno;
    int age;
    cout<<"Enter Roll No:";
    cin>>rollno;
    cout<<"Enter Age:";
    cin>>age;
    cout<<"The Roll No and Age of Given Student :" << rollno <<age;
    }
};
int main()
{
    Student amrita;
    amrita.school();
    return 0;
}