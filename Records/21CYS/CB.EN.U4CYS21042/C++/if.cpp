#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the Value of A : ";
    cin>>a;
    if(a>0)
    {
        cout<<"The Given Number" <<a<< "is a positive number"<<endl;
    }
    else if(a<0)
    {
        cout<<"The Given Number" <<a<< "is a negative number"<<endl;
    }
    else
    {
        cout<<"The Given Number is Zero";
    }
    return 0;
}