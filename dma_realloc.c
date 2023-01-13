#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, *ptr2;
    int a;
    ptr = calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i]=(i+1)*7;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the value of 7*%d = %d \n", i + 1, ptr[i]);
    }
    realloc(ptr, 15*sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        ptr[i]=(i+1)*7;
    }
    for (int i = 0; i < 15; i++)
    {
        printf("the value of 7*%d = %d \n", i + 1, ptr[i]);
    }

    return 0;
}