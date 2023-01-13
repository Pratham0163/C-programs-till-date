#include <stdio.h>
#include<string.h>

void encrypt(char *str){
    int a,b,i;
    a=strlen(str);
    char str2[a];
    for (i = 0; i <a ; i++)
    {
        str2[i]= str[i]++;
    }
    str2[a-1]='\0';
    str = str2;

}
int main()
{
    char str[1000];
    printf("enter the value of string\n");
    scanf("%s", &str);
    printf("the value of string before encryption is %s\n", str);
    encrypt(str);
    printf("the value of encrypted string now is %s\n", str);
return 0;
}
