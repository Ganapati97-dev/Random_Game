#include <stdio.h>
#include <stdlib.h> //used for random number generation
#include <time.h> //used for time

int main()
{
    int num, guess, Nguesses = 1;
    srand(time(0));
    num = rand() % 100 + 1; // Generate a random number between 1 to 100
    //printf("The number is %d \n", num);
    // keep running until number is guesssed
    do //runs atleast once for user
    {
        printf("Guess a number between 1 to 100 :\n ");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Lower number please : \n");
        }
        else if (guess < num)
        {
            printf("HIGHER number please : \n");
        }

        else
        {
            printf("You guessed in %d attempts : \n",Nguesses);
        }
        Nguesses++;
    } while (guess != num);
    return 0;
}