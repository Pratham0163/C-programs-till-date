#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    printf("enter elements of matrix 1 ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("enter elements of matrix 2: ");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        printf("addition of 2 matrices is :");
        for (i = 0; i < 2; i++)
        {
            printf("\n");
            for (j = 0; j < 2; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
}
