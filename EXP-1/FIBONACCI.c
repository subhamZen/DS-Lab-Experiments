// Q4: WACP to generate a fibonacci series upto n using function

#include <stdio.h>

void fibo(int n);

int main()
{
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    fibo(a);

    return 0;
}

void fibo(int n)
{
    int i, num1 = 0, num2 = 1, next;

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d ", num1);
        }
        else if (i == 2)
        {
            printf("%d ", num2);
        }
        else
        {
            next = num1 + num2;
            printf("%d ", next);
            num1 = num2;
            num2 = next;
        }
    }
}

