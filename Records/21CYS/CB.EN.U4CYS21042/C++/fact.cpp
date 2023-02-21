#include<iostream>
using namespace std;
int factorial(int num)
{
{
    if(num==1)
    return 1;
}
return num*factorial(num-1)
}
int main()
{
    int num;
    cout<<"Enter the Value of Number: ";
    cin>>num
    cout<<factorial(num)<<endl
}