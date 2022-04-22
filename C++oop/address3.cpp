#include <iostream>

using namespace std;

int main() 
{
    int a = 1025;
    int *p ;
    p = &a;
    cout << "The size of interger is (in bytes): " << sizeof(int) << endl;
    cout << "The address = "<< p <<", " << "The value = "<< *p << endl;
    // now, we will start void pointers.

    void  *p0;
    p0 = p;
    cout << "The address of p0 : " << p0;
}