#include <stdio.h>
int naturalsum(int n);

int main()
{
    int n;
    printf("enter the value of n \n");
    scanf("%d", &n);
    printf("the value of sum of %d natural numbers is %d \n", n, naturalsum(n));
return 0;
}

int naturalsum(int n)
{
    if (n==1)
    {
        return 1;
    }
    else{
        return n+naturalsum(n-1);
    }
}