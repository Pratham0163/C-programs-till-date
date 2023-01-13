#include<stdio.h>
int add(int a,int b)
{
    // int c;
    // c=a+b;
    // printf("The sum of %d and %d is %d\n",a,b,c);
    return a+b;
}
int subtr(int d, int e)
{
    // int f;
    // f=d-e;
    // printf("The subtraction of %d from %d is %d\n",e,d,f);
    return d-e;
}
int mult(int g, int h)
{
    // int i;
    // i=g*h;
    // printf("The product of %d and %d is %d",g,h,i);
    return g*h;
}
float quot(float j, float k)
{
    // int l;
    // l=j/k;
    // printf("The quotient of %d and %d is %d\n",j,k,l);
    return j/k;
}

int fact(int x){
    if (x==1 || x==0){ //base condition(s) i.e those which end the recursive function

        return 1;
    }
    else{
        return x * fact(x-1); //works like a tree i.e 5*factorial4 then 4 *factorial3.....so on
    }
}
int main()
{
    int a,p,q,r,s,t,u,v,w,x,y,z;
    printf("Enter the serial number for arithmetic\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multipliaction\n");
    printf("4. Division\n");
    printf("5. Finding Factorial:- \n");
    scanf("%d",&p);
    switch(p)
    {
        case 1:
            printf("Enter two numbers to be added\n");
            scanf("%d %d",&q,&r);
            printf("sir the sum is %d",add(q,r));
            break;
        case 2:
            printf("Enter two numbers to be subtracted\n");
            scanf("%d %d",&s,&t);
             printf("sir the difference is %d",subtr(s,t));
            break;
        case 3:
            printf("Enter two numbers to be multiplied\n");
            scanf("%d %d",&u,&v);
              printf("sir the product is %d",mult(u,v));
            break;
        case 4:
            printf("Enter two numbers to be divided\n");
            scanf("%d %d",&w,&x);
            printf("sir the quotient is %f",quot(w,x));
            break;
        
        case 5:
            printf("Enter number to find the factorial of\n");
            scanf("%d",&a);
            printf("sir the factorial is %d",fact(a));
            break;
        default:
            printf("Enter a valid serial number\n");
            break;
    }
    return 0;
}