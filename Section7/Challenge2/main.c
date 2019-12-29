#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int maxRandomNumber = 21; // Has to be one higher then your maximum.
    int userGuess;
    int guessCount = 0;

    time_t t;
    srand((unsigned)time(&t));

    int randomNumber = rand() % maxRandomNumber;

    //printf("%d \n", randomNumber);

    do {
        printf("Guess the random number between 1 and %d I'm thinking off.\n", maxRandomNumber-1);
        printf("Your guess: ");
        scanf("%d", &userGuess);
        if(userGuess != randomNumber)
        {
            printf("That's not it. Please try again.\n");
            ++guessCount;
            printf("You have %d tries left.\n", 5-guessCount);
        }
        if(userGuess == randomNumber)
        {
            printf("You won!");
            break;
        }
    } while (userGuess != randomNumber || guessCount < 5);

    return 0;
}
