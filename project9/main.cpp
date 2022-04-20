#include <iostream>

using namespace std;


void sayHi(string name, int age);

int main()
{

    sayHi("Ishaan", 11.9);
    sayHi("Dev", 10);
    sayHi("Neil", 11.5);





    return 0;
}
void  sayHi(string name, int age) {
    cout << "Hello " << name << " you are "<< age << endl;
}
