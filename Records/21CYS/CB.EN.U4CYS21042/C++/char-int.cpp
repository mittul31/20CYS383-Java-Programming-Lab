#include <iostream>
using namespace std;
int main()
{
int x;
for (x=1; x<=10; x++) 
{
if (x==5)
break;
cout<< x << " ";
}
cout <<"\n What happened at x = " << x << endl;
cout<< endl << endl << endl;
return 0;
}