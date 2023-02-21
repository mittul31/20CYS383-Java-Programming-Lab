#include<iostream>
using namespace std;
int main()
{
    int i,a[100],n;
    cout<<"Enter the number of elements to be inserted :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the Value for Index " << i << endl;
        cin>>a[i];
    }
    cout<<"The Values of the Array are :";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}