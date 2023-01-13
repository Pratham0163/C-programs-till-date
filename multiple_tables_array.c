#include <stdio.h>
int main()
{

    int mult[3][10];
    for (int i = 0; i <10; i++)
    {
        mult[0][i]=2*(i+1);
    }

    for (int i= 0; i < 10; i++)
    {
        printf("2X%d=%d \n",i+1, mult[0][i]);
    }
    printf("\n");
     for (int i = 0; i <10; i++)
    {
        mult[1][i]=7*(i+1);
    }

    for (int i= 0; i < 10; i++)
    {
        printf("7X%d=%d \n",i+1, mult[1][i]);
    }
    printf("\n");
     for (int i = 0; i <10; i++)
    {
        mult[2][i]=9*(i+1);
    }

    for (int i= 0; i < 10; i++)
    {
        printf("9X%d=%d \n",i+1, mult[2][i]);
    }
    
return 0;
}