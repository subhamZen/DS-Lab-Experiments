// Q4: WACP to input two matrices and find their multiplication

#include <stdio.h>

int main()
{
    int m, n, p, q, i, j, k;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter p and q: ");
    scanf("%d %d", &p, &q);

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    if(n == p)
    {
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < q; j++)
            {
                C[i][j] = 0;
                for(k = 0; k < n; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("Resultant matrix:\n");
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < q; j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible");
    }

    return 0;
}

