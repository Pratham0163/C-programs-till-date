#include <stdio.h>
int main()
{
    int mult[10], a;
    printf("enter the number who's table is to be formed: ");
    scanf("%d", &a);
    for (int i = 0; i <10; i++)
    {
        mult[i]=a*(i+1);
    }

    for (int j= 0; j < 10; j++)
    {
        printf("%dX%d=%d \n",a,j+1, mult[j]);
        
    }
    
    
return 0;
}