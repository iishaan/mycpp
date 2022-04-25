#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int cash = 100; 
void play(int bet)
{
    char c[3] = {'J', 'Q', 'K'};
    printf("shuffling ...");
    srand(time(NULL));
    int i;
    for(i = 5; i < 5 ; i++)     
    {

        int x = rand() % 3;
        int y = rand() % 3;
        int  temp = c[x];
         c[x] = c[y];
         c[y] = temp;

    }
    int playrsGuess;
    printf("Whats the  position of  queen - 1,2 or 3?");
    scanf("%d", playrsGuess);
    if(c[playrsGuess - 1] == 'Q'){
        cash += 3*bet;
        printf("You win ! result %c%c%c total cash %d", c[0],c[1],c[2], cash);
    }
    else {
        cash -= bet;
        printf("You loose ! result %c%c%c total cash %d", c[0],c[1],c[2], cash);
    }
}

int main ( )
{

    int bet;
    printf("Welcome to Virtual casino \n");
    printf("total cash = $%d\n", cash);
    while (cash > 0){
        printf("What is the amount you want to bet? $");
        scanf("%d", &bet);
        if (bet == 0 || bet > cash) break;
        play(bet);
        printf("\n****************************************\n");
    }

}