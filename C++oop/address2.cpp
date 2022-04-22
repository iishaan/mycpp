#include <iostream>

using namespace std;

int main() 
{
    int a = 1025;
    int *p ;
    p = &a;
    cout << "The size of interger is (in bytes): " << sizeof(int) << endl;
    cout << "The address = "<< p <<", " << "The value = "<< *p << endl;
    cout << "The address of p+1 is: " << p + 1 << ", The value of *p+1 is : " << *(p + 1);
    /*char *p0;
    p0 = (char)p;
    cout << "The size of interger is (in bytes): " << sizeof(char) << endl;
    cout << "The address = "<< p0 <<", " << "The value = "<< *p0 << endl;*/
} 