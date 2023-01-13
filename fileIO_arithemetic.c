#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    FILE *ptr2;
    int a,b;
    ptr= fopen("problem5.txt", "r");
    fscanf(ptr, "%d", &a);
    fclose(ptr);
    ptr2= fopen("problem5.txt", "w");
    fprintf(ptr2, "%d", 2*a);
    fclose(ptr2);
    printf("now the value of the integer in the file has been doubled\n");
    
    return 0;
}