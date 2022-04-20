#include <iostream>

using namespace std;

int main()
{
    int l;
    int b;
    cout << "Enter the length of a rectangle in cm: ";
    cin >> b>>l;
    int result = 2*(l + b);
    cout << "Perimeter of a rectangle is : "<< result;
    return 0;
}

