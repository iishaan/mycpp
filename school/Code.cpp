#include <iostream>

using namespace std;

int main()
{
    double box1;
    double box2;
    cout << "Enter the Weight of the box1 in Kg \n ";
    cin >> box1;
    cout << "Enter the Weight of the box2 in Kg \n";
    cin >> box2;
    double result1 = box1*1000;
    double result2 = box2*1000;
    cout << "The weight of the box1 is  "<< result1 << "g and weight of box2 is " << result2 << "g";
    return 0;
}


