// Q5: WACP to findout the GCD of 2 integers using function
#include <stdio.h>

int GCD(int a, int b);

int main()
{
    int num1, num2, gcd;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    gcd = GCD(num1, num2);

    printf("GCD is: %d\n", gcd);

    return 0;
}

int GCD(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

