#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr1, *fptr2;
    char filename[100],c;
    printf ("enter the filename you want to open\n");
    scanf("%s", filename);

    //open file for reading
    fptr1= fopen(filename,  "r");
    if (fptr1==0)
    {
        printf("cannot open file %s \n", filename);
        exit (0);
    }
    
    printf("enter the filename to open for wrtiting \n");
    scanf("%s",  filename);
    
    // open another file for writing
    fptr2 = fopen(filename, "w");
    // if (fptr2==0)
    // {
    //     printf("cannot open file \n", filename);
    //     exit(0);
    // }
    // read contents from fiel 
    c=fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c=fgetc(fptr1);

    }
    
    printf("\n contents copied to %s \n", filename);
    fclose(fptr1);
    fclose(fptr2);
return 0;
}