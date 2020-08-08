#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    srand(time(0));
    n = rand() % 100 + 1;// Generate a random number between 1 to 100
    printf("The number is %d", n);
    scanf("%d", &n);

    // keep running until number is guesssed


    return 0;
}