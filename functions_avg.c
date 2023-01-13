#include <stdio.h>

float average(int a, int b, int c);

int main()
{
    float a, b, c;
    printf("enter the 3 numbers of which you want the average \n");
    scanf("%f %f %f", &a, &b, &c);
    printf("the average of the given 3 numbers is %f \n", average(a, b, c));
    return 0;
}

float average(int a, int b, int c)
{
    float answer;
    answer = (float)(a + b + c) / 3; // this float here is typecasting the format into float because if not the
    // value taken in will also be integer as float average(int a ,int b, int c) which means 3 integers
    // when  added will give an integer & on dividing by 3 (an integer) will also give an integer hence
    // typecasted into float so that it returns & takes float
    return answer;
}