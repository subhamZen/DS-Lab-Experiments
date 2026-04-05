// Q2: WACP to input a m x n matrix and check if it is a sparse matrix or not
//and if sparse the then findout its corresponding triplet

#include <stdio.h>

void triplet(int A[50][50], int m, int n, int nz)
{
    int i, j, k = 1;
    int T[50][50];

    T[0][0] = m;
    T[0][1] = n;
    T[0][2] = nz;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(A[i][j] != 0)
            {
                T[k][0] = i;
                T[k][1] = j;
                T[k][2] = A[i][j];
                k++;
            }
        }
    }

    printf("\nTriplet Representation:\n");
    for(i=0;i<=nz;i++){
    	for(j=0;j<=2;j++){
    		printf("%d",T[i][j]);
		}
		printf("\n");
	}
}

int main()
{
    int A[50][50], m, n, i, j, nz = 0;

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(A[i][j] != 0)
                nz++;
        }
    }

    if(nz < (m * n) / 2)
    {
        printf("\nMatrix is Sparse\n");
        triplet(A, m, n, nz);
    }
    else
    {
        printf("\nMatrix is NOT Sparse\n");
    }

    return 0;
}

