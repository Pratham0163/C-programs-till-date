#include <stdio.h>
int fib(int n);
int main()
{
    int a;
    printf("enter the value of n\n");
    scanf("%d", &a);
    printf("the value of %dth term of the fibbonacci sequence is %d\n", a, fib(a));
return 0;
}

int fib(int n){
    
    if (n==1)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
    
}