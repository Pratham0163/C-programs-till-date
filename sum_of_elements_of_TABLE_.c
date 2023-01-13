#include <stdio.h>
int main()
{
    int b,i,a=0; 
    printf("enter the number");
    scanf("%d",&b);
    
    for (i = 1; i <=10; i++)
    {
      a+=b*i;
      // printf("%d %d\n", i,a);
    }
     printf("the sum of table of the number is %d \n", a);
return 0;
}