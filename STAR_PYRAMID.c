#include <stdio.h>
int main()
{
    int space=4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        space--;
    }
return 0;
}