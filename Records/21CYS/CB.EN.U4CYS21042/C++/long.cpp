#include<iostream>
using namespace std;
class angle
{
    public:
    void anle()
    {
        int b,i;
        cout<<"Enter the Number of Times to Get Direction : ";
        cin>>b;
        for(i=1;i<=b;i++)
        {
        int degree;
        float minutes;
        char a;
        cout<<"Enter the Degree :";
        cin>>degree;
        cout<<"Enter the Minutes :";
        cin>>minutes;
        cout<<"Enter the Direction :";
        cin>>a;
        cout<<degree<<"degree" << minutes <<"'" <<a;
        cout<<"\n";
    }
    }
};
int main()
{
    angle nav;
    nav.anle();
    return 0;
}