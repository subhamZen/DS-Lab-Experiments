// Q2: WACP to findout the factorial of any integer using function
#include <stdio.h>

int fact(int n);

int main()
{
    int N, factorial;

    printf("Enter an integer: ");
    scanf("%d", &N);

    factorial = fact(N);

    printf("Factorial is: %d\n", factorial);

    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

