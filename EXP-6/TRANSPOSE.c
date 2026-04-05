// Q3: WACP to input a square matrix and transpose it

#include <stdio.h>

int main()
{
    int n, i, j;
    int A[50][50];

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Transposed matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }

    return 0;
}

