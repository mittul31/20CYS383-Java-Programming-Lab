#include<iostream>
using namespace std;
class Am
{
    public:
    void qwe()
    {
        int date;
        char c;
        float n;
        cout<<"Enter the Date :";
        cin>>date;
        cout<<"Enter the Character :";
        cin>>c;
        cout<<"Enter the Value of FLoat :";
        cin>>n;
        cout<<"The Values are : " << date << c << n << endl; 
    }
};
int main()
{
    Am obj;
    obj.qwe();
    return 0;
}