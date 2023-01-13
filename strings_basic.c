// #include <stdio.h>
// int main()

// {
//     char str[]="DRAACULA";
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%c", str[i]);
//     }
    
// return 0;

#include <stdio.h>
intLmain()

{
    char str[]={'D', 'R', 'A', 'C', 'U', 'U', 'L', 'A', '\0'};
    char *ptr = str; 
     for ( ;*ptr !='\0'; ptr++)
     {
         printf("%c", *ptr);
     }
return 0;
} 