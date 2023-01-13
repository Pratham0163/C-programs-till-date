#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("enter the value of the number who's table you want to store in file \n");
    scanf("%d", &a);
    FILE *ptr;
    ptr= fopen("table.txt", "w");
    for (int i = 0; i <10; i++)
    {
        fprintf(ptr, "%d*%d=%d \n", a,i+1, a*(i+1));
    }

    fclose(ptr);
    printf("Successfully generated table of %d to table.txt\n", a);
return 0;
}