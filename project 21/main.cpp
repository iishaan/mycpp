#include <iostream>

using namespace std;

int power ( int baseNum, int PowNum){
    int result = 1;
    for(int i =0; i < PowNum; i++){
        result = result * baseNum;
    }
    return result;
}

int main()
{
    cout << power(8 , 6);

    return 0;
}
