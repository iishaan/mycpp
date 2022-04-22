#include <iostream>

using namespace std;

int main() 
{
    int a = 10;
    int *p ;
    p = &a;

    cout <<"Address of p is:"<< p << endl; //This tells the addreass of p.
    cout << "The value of address p is: " << *p << endl;// this tells the value of addreass of p.
    cout << "The size of interger is (in bytes): " << sizeof(int) << endl;// this tells the size of an interger.
    cout << "The address of p+1 is: " << p + 1 << endl; // This tells the addreass of p + 1.(If we add 1 to the addreas of any interger the value will increas by 4 as 1 interger has a value of 4 bytes. it goes same for other variables like char , it has a value of 1 bytes so if you add 1 to any char it will only increas by 1.)
    cout << "The value of address *p + 1 is: " << *(p + 1) << endl;//This tells the value of *p + 1.

  /*  int b = 20;
    *p = b;
    cout << p << endl; 
    cout << *p << endl; 
    */

} 