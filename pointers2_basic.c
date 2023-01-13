#include <stdio.h>
int main()
{
    int i,*ptr, **ptr_ptr;
    printf("enter the value of i \n");
    scanf("%d", &i);
    ptr=&i;
    ptr_ptr=&ptr;

    printf("the value of i is %u \n", **ptr_ptr);

return 0;
}