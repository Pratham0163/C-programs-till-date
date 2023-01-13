#include <stdio.h>
int main()
{
    int a=0, i;
    for (i = 1; i <= 10; i++)
    {
        a += i;
        printf("%d %d\n", i,a);
    }

    printf("the value of first 10 natural numbers is  %d \n", a);
    return 0;
}