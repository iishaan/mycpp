#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool OutOfGuesses = false;

    while(secretNum != guess && !OutOfGuesses){
        if(guessCount < guessLimit){
        cout << "Enter guess:  ";
        cin >> guess;
        guessCount++;
    }else{
        OutOfGuesses = true;
    }

    }
    if(OutOfGuesses){
        cout << "You lose!";
    }else{
    cout << "You Win!";
    }



    return 0;

}
