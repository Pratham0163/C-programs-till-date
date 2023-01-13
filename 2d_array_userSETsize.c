#include <stdio.h>
void display(int a, int b, int arr[a][b]);

int main()
{
    int m,n;
    printf("enter the size of array in row(m) column(n) format  ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of row %d column %d  ", i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    display(m, n, arr);
    return 0;
}

void display(int a, int b, int arr[a][b])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}