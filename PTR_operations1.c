#include <stdio.h>
int main()
{
    int a[10];
    int *i, *j, *k;
    i=&a[2];
    j=&a[3];
    k=&a[1];
    
    printf("The value of pointer i is %u\n", i);
    printf("The value of pointer j is %u\n", j);
    printf("The value of pointer k is %u\n", k);
    // printf("The value of pointer i++ is %u\n", ++i);
    // printf("The value of pointer i-- is %u\n", --i);
    // // printf("The value of i+j is %u", j+i);
    // printf("The value of j-i is %u\n", j-i);
    // printf("The value of j-k is %u\n", j-k);
    // printf("The value of i-k is %u\n", i-k);


    if (j>i)
    {
        printf("j is greater than i & j is %u , i is %u\n", j,i);
    }
    else if (i>j)
    {
        printf("i is greater than j & i is %u , j is %u\n", i,j);
    }
    else if (i==j)
    {
        printf("j is equal to i & j is %u , i is %u\n", j,i);
    }
    else printf("bro wtf\n");
    
return 0;
}