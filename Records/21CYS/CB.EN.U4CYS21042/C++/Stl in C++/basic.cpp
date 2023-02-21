#include<iostream>
using namespace std;

template <class T>
T area(T a , T b)
{
T result = (a * b) / 5;
return result;
}
int main()
{
    int x = area<int>(10,15);
    double y = area<double>(5.5,10);
    float z = area<float>(7.5,25);
    cout << x << "," << y << "," << z << endl;
}