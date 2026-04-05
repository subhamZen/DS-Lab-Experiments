// Q3: WACP to enter an integer and check it is prime or not using function

#include <stdio.h>

void prime(int n);

int main()
{
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);

    prime(x);

    return 0;
}

void prime(int n)
{
    int i, flag = 0;

    if (n <= 1)
    {
        printf("%d is not a prime number\n", n);
        return;
    }

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
}


