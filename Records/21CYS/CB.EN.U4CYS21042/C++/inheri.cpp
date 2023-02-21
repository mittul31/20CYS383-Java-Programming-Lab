#include<iostream>
using namespace std;
class A
{
public:
int x;
protected:
int y;
private:
int z;
};
class B : public A {
// x stays public
// y stays protected
// z is not accessible from B
};
int main()
{
B bes;
bes.x=5;
bes.y=10;
bes.z=15;
}
