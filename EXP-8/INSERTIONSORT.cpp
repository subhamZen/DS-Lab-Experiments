//Q1. WACP TO PERFORM INSERTION SORT OPERATION
#include <stdio.h>

void insert_sort(int A[], int n)
{
    int i, j, temp;

    for(i = 1; i < n; i++)
    {
        temp = A[i];
        j = i - 1;

        while(j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }

        A[j + 1] = temp;
    }
}

int main()
{
    int A[50], i, n;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    insert_sort(A, n);

    printf("Sorted Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
