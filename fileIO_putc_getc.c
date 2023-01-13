#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    FILE *ptr2;
    ptr= fopen("tocopy.txt", "r");
    ptr2= fopen("copiedfile.txt", "w");
    char c=fgetc(ptr);
    while(c!=EOF)
    {
        fputc(c, ptr2);
        fputc(c, ptr2);
        c=fgetc(ptr);
    }
    
    fclose(ptr);
    fclose(ptr2);
    return 0;
}