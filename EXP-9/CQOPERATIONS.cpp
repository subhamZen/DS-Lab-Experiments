//Q2. WACP TO PERFORM INSERTION, DELETION AND DISPLAY OPERATION IN A CIRCULAR QUEUE .
//WITH CONTAINS MENU OPTION
#include <stdio.h>
#define MAX 5

int front = -1;
int rear = -1;
int cq[MAX];

void insert(int item)
{
    if (front == 0 && rear == MAX - 1)
    {
        printf("\n CQ Overflow");
        return;
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % MAX;
        }

        cq[rear] = item;
        printf("\n %d is inserted", item);
    }
}

void deletion(int item)
{
    if (front == -1 && rear == -1)
    {
        printf("\n CQ Underflow");
        return;
    }
        item = cq[front];

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }

        printf("\n %d is deleted", item);
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("\n CQ is empty");
        return;
    }

    printf("\n Elements are: ");

    for (i = front; i <= rear; i++)
    {
        printf("%d\t", cq[i]);
    }
}

int main()
{
    int option, item;
    char ch = 'y';

    while (ch == 'y')
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\nEnter your choice (1-3): ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter element to insert: ");
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
            printf("\nInvalid choice");
        }

        printf("\nDo you want to continue (y/n): ");
        scanf(" %c", &ch);
    }

    return 0;
}
