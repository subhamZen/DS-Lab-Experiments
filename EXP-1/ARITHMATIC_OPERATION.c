// Q1: WACP to perform different arithmatic operations like(addition,substraction,
//division,multiplication) using function 
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);

int main()
{
    int num1, num2, a1, a2, a3, a4;

    printf("Enter 2 integers: ");
    scanf("%d %d", &num1, &num2);

    a1 = add(num1, num2);
    a2 = sub(num1, num2);
    a3 = mul(num1, num2);
    a4 = divi(num1, num2);

    printf("Addition is: %d\n", a1);
    printf("Subtraction is: %d\n", a2);
    printf("Multiplication is: %d\n", a3);
    printf("Division is: %d\n", a4);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    return a / b;
}

