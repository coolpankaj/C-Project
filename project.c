#include <stdio.h>
#include <conio.h>

#include <stdlib.h>
#include <time.h>

// void check(int original, int guess);

int main()
{

    int _randomNumber = 0, userGuess, attempt = 0;

    srand(time(0));
    _randomNumber = rand() % 100 + 1;
    // printf("random number is : %d \n", _randomNumber);

    printf("*******************************************  GUESS THE NUMBER GAME[1 - 100]  ****************************************** \n");

    void check(int originalValue, int guessValue)
    {
        attempt++;

        if (guessValue < originalValue)
        {
            printf("Enter larger value: ");
            scanf("%d", &userGuess);
            check(_randomNumber, userGuess);
        }
        else if (guessValue > originalValue)
        {
            printf("Enter smaller value: ");
            scanf("%d", &userGuess);
            check(_randomNumber, userGuess);
        }
        else
        {
            printf("\nHoorray !!!, You guessed it right \n");
            printf("Random Number: %d \tAttempt: %d\n", _randomNumber, attempt);
        }

        // return 0;
    }
    
    printf("Enter the number: ");
    scanf("%d", &userGuess);

    // printf("user enetered number %d\n", userGuess);
    check(_randomNumber, userGuess);

    return 0;
}