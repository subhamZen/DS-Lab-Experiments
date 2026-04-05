//Q1. WACP TO PERFORM INSERTION, DELETION AND DISPLAY OPERATION IN A LINEAR QUEUE .
//WITH CONTAINS MENU OPTION
#include <stdio.h>
#define MAX 5

int front = -1;
int rear = -1;
int LQ[MAX];

void insert(int item)
{
    if (rear == MAX - 1)
    {
        printf("LQ Overflow\n");
        return;
    }

    if (rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear++;
    }

    LQ[rear] = item;
    printf("%d is inserted\n", item);
}

void deletion(int item)
{
    if (front == -1)
    {
        printf("LQ Underflow\n");
        return;
    }

    item = LQ[front];

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }

    printf("%d is deleted\n", item);
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("LQ Empty\n");
        return;
    }

    for (i = front; i <= rear; i++)
    {
        printf("%d\t", LQ[i]);
    }
    printf("\n");
}

int main()
{
    int option, item;
    char ch = 'y';

    while (ch == 'y')
    {
        printf("\n1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Display\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &item);
            insert(item);
            break;

        case 2:
            deletion(item);
            break;

        case 3:
            display();
            break;

        default:
            printf("Invalid choice\n");
        }

        printf("Do you want to continue (y/n): ");
        fflush(stdin);
        scanf(" %c", &ch);
    }

    return 0;
}
