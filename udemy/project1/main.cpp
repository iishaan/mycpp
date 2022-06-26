#include <iostream>
using namespace std;
int func (const int& y) {
    cout<<"Address of y is: "<< &y << endl;
    return y;
}
int main()
{
    int x = 2;
    cout<<" address of x is : "<< &x <<endl;
    int z = func(x);
    cout<<"address of z is : "<< &z<<endl;
    cout<<"after calling func(), x = "<<x<<endl;
    cout<<"after calling func(), z = "<<z<<endl;

    return 0;
}
