#include<stdio.h>

typedef struct complex{
    int real;
    int complex;
}comp;

int main(){
    comp cnum;
        printf("Enter the real value for num\n");
        scanf("%d", &cnum.real);

        printf("Enter the complex value for num\n" );
        scanf("%d", &cnum.complex);

        printf("the value of the complex number is %d + %di", cnum.real, cnum.complex);
    return 0;
}