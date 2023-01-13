#include <stdio.h>
int count_positive(int *arr, int a){
    int t=0;
    for (int i = 0; i < a; i++)
    {
        if (arr[i]>0)
        {
            t++;
        }
    }
    return t;
}

int main()
{
    int a;
    printf("enter the size of the array\n");
    scanf("%d", &a);
    int arr[a];
    printf("enter the elements of the array\n");
    for (int i = 0; i < a; i++)
    {
        printf("enter the %d element of the array\n", i+1);
        scanf("%d", &arr[i]);
    }
    printf("the number of positive integers in this array is %d\n", count_positive(arr, a));
    
    
return 0;
}