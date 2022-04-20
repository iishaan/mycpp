#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum){
    string dayName;

    switch( dayNum){
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 3:
        dayName = "Tuesday";
        break;
    case 4:
        dayName = "Wednesday";
        break;
    case 5:
        dayName = "Thrusday";
        break;
    case 6:
        dayName = "Friday";
        break;
    case 7 :
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid Day Number";


    }

    return dayName;
}

int main()
{

    cout << getDayOfWeek(55);
    return 0;
}
