#include <iostream>

using namespace std;

int main()
{
    double h;
    double b;

    cout << "Enter the hight and base of a triangle in cm: ";
    cin >>h>>b;

    double result = 0.5*b*h;
    cout << "Area of a Triangle with height in cm" << h << "and base in cm "<< b<< " is "<< result << " Squar cm";


    return 0;
}

