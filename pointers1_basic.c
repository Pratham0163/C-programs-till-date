#include <stdio.h>
int address(int *a);
int main()
{
    int i=5;
    printf("the address of i is %u \n", &i);
    printf("the address of i is %u \n", address(&i));
return 0;
}

int address(int *a){
    return a;
}