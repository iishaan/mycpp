#include <iostream>

using namespace std;

int main()
{
    string name;
    string hobby1;
    string hobby2;

    cout << "Enter your name: ";
    cin>>name;
    cout<<"Enter your hobby1: ";
    cin>>hobby1;
    cout << "Enter your hobby2: ";
    cin>>hobby2;

    cout << "I am "<<name<< "\n";
    cout << "My hobbies are "<<hobby1<<" and "<<hobby2;
    return 0;
}
