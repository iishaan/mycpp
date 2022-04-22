#include <iostream>

using namespace std;

int SumOfElements ( int a[])
{
    
}

int main() 
{

    int a[] = {2, 4, 5, 8, 1};
    int i;
    for (i = 0; i < 5; i++)
    {

        cout << "The  Address  = " << &a[i] << endl;
        cout << "The address   = " << a + 1 << endl;
        cout << "The value     = " << a[i] << endl;
        cout << "The value     = " << *(a + i) << endl;

    }

}