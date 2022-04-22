#include <iostream>

using namespace std;

void print (char* c)
{

    int i = 0;
    while( c[i] != '\0')
    {

        cout << c[i] << endl;
        i++;

    }
    cout << "\n";
}
int main()
{

        char c[20] = "hello";
        print(c);
 
}