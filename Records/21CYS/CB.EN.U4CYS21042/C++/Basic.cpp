#include<iostream>
using namespace std;
int main()
{
    int a,b,add,sub,mul,div;
    cout<<"Enter the Value of A :";
    cin>>a;
    cout<<"Enter the value of B :";
    cin>>b;
    cout<<"The Value of A"<<a<<endl;
    cout<<"The Value of B"<<b<<endl;
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    cout<<"Operations";
    cout<<"Addition :"<<add<<endl;
    cout<<"Subtraction :"<<sub<<endl;
    cout<<"Multiplication :"<<mul<<endl;
    cout<<"Division :"<<div<<endl;
    return 0;
}