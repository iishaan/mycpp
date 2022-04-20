#include <iostream>

using namespace std;

class Chef {
    public:

        void makeChicken () {
            cout << "The Chef Makes yummy Chicken"<< endl;
        }
        void makeSalad () {
            cout << "The Chef Makes Salad"<< endl;
        }
        void makeSpecialDish () {
            cout << "The Chef Makes Special Dish "<< endl;
        }

};
class ItalianChef : public Chef{
    public :
    void makePasta(){
        cout << "The Chef Makes Pasta" << endl;
    }
    void makeSpecialDish () {
            cout << "The Chef Makes chicken  and fish"<< endl;
    }
};

int main()
{


   Chef chef;
   chef.makeSpecialDish();

   ItalianChef italianChef;
   italianChef.makeSpecialDish();



    return 0;
}

