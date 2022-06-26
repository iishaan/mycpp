#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(const vector<int>& vec) {
    for (auto v : vec)
        cout<< v << ",";

    cout<<endl;
}
class Test {};
int main()
{
    //int y{7.7};
    //cout<<" y = " << y <<endl;
    vector<int> old_one(4);
    vector<int> old_two(4,2);
    vector<int> uni_one{4};
    vector<int> uni_two{4,2};

    cout<<"old_one = ";
    print(old_one);

    cout<<"old_one = ";
    print(old_two);

    cout<<"old_one = ";
    print(uni_one);

    cout<<"old_one = ";
    print(uni_two);

    Test test{};
}
