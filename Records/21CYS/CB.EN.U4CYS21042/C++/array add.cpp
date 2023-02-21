#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n,sum=0;
    cout<<"Enter the Number of Elements to be Printed :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the Value for Index : "<< i<<endl;
        cin>>a[i];
    }
    cout<<"The Values of the Array are :";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"\n"<<endl;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<"The Sum of Array is : "<< sum<<endl;
    return 0; 
}