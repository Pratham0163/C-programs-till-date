#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1,v2;
    printf("enter the x co-ordinate of vector 1: ");
    scanf("%d", &v1.x);
    printf("enter the y co-ordinate of the vector 1: ");
    scanf("%d", &v1.y);
    printf("the vector is %di+%dj \n", v1.x, v1.y);

    printf("enter the x co-ordinate of vector 2: ");
    scanf("%d", &v2.x);
    printf("enter the y co-ordinate of the vector 2: ");
    scanf("%d", &v2.y);
    printf("the vector is %di+%dj", v2.x, v2.y);
    
return 0;
}