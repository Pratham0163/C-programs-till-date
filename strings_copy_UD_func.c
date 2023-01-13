#include <stdio.h>
#include <string.h>
void stringcopy(char *st1, char *st2){
    int a,i;
    a= strlen(st2);
        for (i = 0; i < a; i++)
        {
            st1[i]=st2[i];
        }
        st1[i]='\0';
}
int main()
{
    char st1[48];
    char st2[50];
    printf("enter the value of string 1 \n");
    scanf("%s", &st1);
    printf("enter the value of string 2 \n");
    scanf("%s", &st2);
    printf("the value of string 1 & string2 now is %s & %s \n", st1, st2);
    stringcopy(st2, st1);
    printf("the value of string 1 & string2 after copy is %s & %s \n", st1, st2);
return 0;
}