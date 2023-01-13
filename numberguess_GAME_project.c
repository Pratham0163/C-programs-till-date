#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 and 100
    // printf("The number is %d", number);
    for (nguesses = 1; guess != number; nguesses++)
    {
        printf("guess the number which is b/w 1 to 100");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("higher number please \n");
        }
        else if (guess > number)
        {
            printf("lower number please \n");
        }
        else if (guess == number)
        {
            printf("you have guessed it in %d attempts", nguesses);
            break;
        }
        
    }


    return 0;
}