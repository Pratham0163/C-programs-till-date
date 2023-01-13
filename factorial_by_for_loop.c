#include <stdio.h>
int main()
{
    int a, b = 1, i; // ask doubt why is it necessary to declare b=1 & not simply b
    printf("enter the number");
    scanf("%d", &a);
    for (i = a; i > 0; i--) // e.g for 5 it works 5*4*3....
    {
        b *= i;
    }

    printf("the factorial of the number %d is %d", a, b);
    return 0;
}