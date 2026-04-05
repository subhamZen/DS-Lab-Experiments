//Q2. WACP TO PERFORM QUICKSORT OPERATION
#include <stdio.h>

void quick_sort(int A[], int l, int h)
{
    int low = l;
    int high = h;
    int pivot = A[(l + h) / 2];
    int temp;

    while(low <= high)
    {
        while(A[low] < pivot)
            low++;

        while(A[high] > pivot)
            high--;

        if(low <= high)
        {
            temp = A[low];
            A[low] = A[high];
            A[high] = temp;

            low++;
            high--;
        }
    }

    if(l < high)
        quick_sort(A, l, high);

    if(low < h)
        quick_sort(A, low, h);
}

int main()
{
    int A[50], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    quick_sort(A, 0, n - 1);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
