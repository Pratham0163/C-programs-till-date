#include <stdio.h>
float product(float a, float b, float c);
float quotient(float a, float b);

int main()
{
    float a,b,c,d,e,f,g;
    printf("enter the 3 nos of whose you want the product\n");
    scanf("%f %f %f", &a,&b,&c);
    printf("the product of the 3 numbers is %f \n", product(a,b,c));
    printf("enter the other 2 numbers you want the quotient of\n");
    scanf("%f %f",&d,&e);
    printf("the quotient of the 2 given numbers is %f\n", quotient(d,e));
    f= product (a,b,c);
    g= quotient (d,e);
    printf("now the product of the quotient & the initial product is %f\n", product(f,g,1));

return 0;
}

float product(float a, float b, float c){
    return a*b*c;
}

float quotient (float a, float b){
    return a/b;
}