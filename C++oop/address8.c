#include <stdio.h>
void Func (int* a)
{

}


int main () 
{

    int c[3][2][2]= {{{2,5}, {7,9}},
                     {{3,4}, {6,1}},
                     {{0,8}, {11,13}}};
    int a[2]  = {1, 2};
    int b[2][3] = {{2,4,6}, {5,7,8}};
    Func(a);
    
}