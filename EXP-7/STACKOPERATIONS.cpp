//Q1. WACP TO PERFORM STACK OF OPERAIONS OF THE FOLLOWING USING UDF;
// I.PUSH  II.POP  III.DISPLAY
#include <stdio.h>
#define MAX 5

int top = -1;
int S[MAX];

void push();
void pop();
void disp();

int main()
{
    int ch, op;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                disp();
                break;

            case 4:
                printf("\nThank You\n");
                return 0;

            default:
                printf("\nChoice not found\n");
        }

        printf("\nDo you want to continue (1/0): ");
        scanf("%d", &op);

    } while(op == 1);

    printf("\nThank you. Visit again.\n");
    return 0;
}

void push()
{
    int x;

    if(top == MAX - 1)
    {
        printf("\nOverflow");
        return;
    }
    else
    {
        printf("\nEnter element to push: ");
        scanf("%d", &x);

        top++;
        S[top] = x;

        printf("The element %d is inserted\n", x);
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nUnderflow");
        return;
    }

    printf("\nThe deleted element is: %d", S[top]);
    top--;
}

void disp()
{
    int i;

    if(top == -1)
    {
        printf("\nEmpty stack can't be traversed");
        return;
    }
    else
    {
        printf("\nStack elements are:\n");

        for(i = top; i >= 0; i--)
        {
            printf("%d\n", S[i]);
        }
    }
}
