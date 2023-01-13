#include <stdio.h>
#include<string.h>
int occurence(char *str, char c){
    int a,b=0,i;
    a=strlen(str);
    for (i = 0; i < a; i++)
    {
        if (str[i]==c)
        {
            b++;
        }
    }
    return b;
}

int main()

{
char str[100];
char c;
printf("enter the value of string\n");
scanf("%s", str);
fflush(stdin); // because when enter is hit after entering the string value it counts as input for below scanf
printf("enter the char who's occurence is to be checked \n");
scanf("%c", &c);
printf("the number of times the char %c occurs in string:- %s is %d", c, str, occurence(str, c));

return 0;
}