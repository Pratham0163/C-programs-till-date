#include <stdio.h>

// question 3 chapter 2 practice set
int main()
{
    int a, b;
    printf("enter the number");
    scanf("%d", &a);
    if (a % 97 == 0)
        printf("the number is %d divisible by 97", a);
    else
        printf("the number %d is not divisible by 97", a);
    return 0;
}