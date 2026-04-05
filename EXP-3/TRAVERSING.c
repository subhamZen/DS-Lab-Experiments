// Q1: WACP to input an array and traverse the array using function

#include<stdio.h>

void traverse(int a[], int n)
{
    int i;
    printf("Traversing the array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void main()
{
    int a[10], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    traverse(a, n);
}

