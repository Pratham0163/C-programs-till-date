#include <stdio.h>
void sumANDavg(int a , int b, int *sum , float *avg);

int main()
{
    int i , j, sum;
    float avg;
    printf("enter the 2 numbers");
    scanf("%d %d", &i, &j);
    sumANDavg(i, j, &sum, &avg);
    printf("the sum & avg of the 2 numbers is a %d & %f", sum, avg);
return 0;
}

void sumANDavg(int a, int b, int *sum, float *avg){
    *sum = a+b;
    *avg=(float)*sum/2;
}