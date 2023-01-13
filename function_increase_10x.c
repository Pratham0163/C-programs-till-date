#include <stdio.h>
int increase10x(int a);

int main()
{
    int a;
    printf("enter the value of a \n");
    scanf("%d", &a);
    increase10x(a);
    printf("the value of a after increasing 10x is %d \n",a);
return 0;
}

int increase10x(int a)
{
    a=10*(a);
    return a;
}