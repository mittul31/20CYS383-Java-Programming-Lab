#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter an Character :";
    cin>>a;
    switch(a)
    {
        case 'a':
        {
            cout<<"First Letter";
            break;
        }
        case 'b':
        {
            cout<<"Second Letter";
            break;
        }
        default:
        cout<<"Please Enter Again";
    }
    return 0;
}