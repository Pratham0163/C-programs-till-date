#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    ptr= fopen("name_salary.txt", "w");
    char name1[30], name2[30];
    int salary1, salary2;
    printf ("enter the name & salary of the 1st employee\n");
    scanf ("%s %d", name1, &salary1);
    printf ("enter the name & salary of the 2nd employee\n");
    scanf ("%s %d", name2, &salary2);
    fprintf(ptr, "%s, %d \n", name1, salary1);
    fprintf(ptr, "%s, %d\n", name2, salary2);
    
    fclose(ptr);
    return 0;
}