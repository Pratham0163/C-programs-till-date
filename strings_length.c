#include <stdio.h>
int stringlenthg(char *str){
    int b=0;
    char *ptr= str;
    for ( ;*ptr !='\0'; ptr++)
     {
         b++;
     }
    return b;
     
}
int main()
{
char str[1000];
printf("enter the value of string\n");
scanf("%s", &str);
printf("the length of string is %d\n", stringlenthg(str));
return 0;
}