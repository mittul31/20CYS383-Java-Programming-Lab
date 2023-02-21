#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,a[10][10];
    cout<<"Enter the number of rows and columns for the Matrix : ";
    cin>>m>>n;
    cout<<"Enter the Values for Matrix A :";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[m][n];
        }
    }
    cout<<"The Values of the Given Matrix A :";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[m][n]<<endl;
        }
    }
    return 0;
}