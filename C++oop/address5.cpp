#include <iostream>

using namespace std;

void Double ( int* a , int size)
{
    int i, sum = 0; 
    for (i = 0; i < size ; i++)
    {

        a[i] = 2*a[i]; 
        
    }    

}

int main() 
{

    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a)/sizeof(a[0]);
    int i;
    Double(a, size); 
    for (i = 0; i < size; i++   )
    {

        cout << a[i] << endl;

    }
}