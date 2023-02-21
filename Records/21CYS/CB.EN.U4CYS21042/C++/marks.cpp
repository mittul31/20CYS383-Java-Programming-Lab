#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your Average :";
    cin>>a;

    if(a<100 && a>90)
    {
        cout<<"Your Score : "  <<a<<"belongs to A++"<<endl;
    }
    else if (a<90 && a>70)
    {
        cout<<"Your Score : "  <<a<< "belongs to B++"<<endl;
    }
    else if (a<70 && a>50)
    {
        cout<<"Your Score : "  <<a<<"belongs to C++"<<endl;
    }
    else
    {
        cout<<"Better Luck Next";
    }
    return 0;

}