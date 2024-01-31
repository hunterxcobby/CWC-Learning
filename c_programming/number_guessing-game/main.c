#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int targetNumber;
    int UserGuess;
    int attempts = 0;

    srand(time(NULL));

    /* generate random numbers from 1 to 100*/
    targetNumber = rand() % 100 + 1;

    while(1)
    {
        printf("Enter your guess (1-100):\n");

        if(scanf("%d", &UserGuess) != 1)
        {
            printf("Invalid Input\n");
            
            /*clear the input buffer*/
            while (getchar() != '\n')
            continue;
        }

        attempts++;

        /* check if the users input is correct*/
        if (UserGuess == targetNumber)
        {
            printf("Congratulations! You guessed correct number in %d attempts.\n", attempts);
            break;
        }
        else
        {
            printf("Incorrect ! Try %s.\n", UserGuess > targetNumber ? "lower" : "higher");
        }
        // else if (UserGuess > targetNumber)
        // {
        //     printf("Incorrect ! Try a lower number\n");
        // }
        // else
        // {
        //     printf("Incorrect ! Try a higher number\n");
        // }

    }

    return(0);
}