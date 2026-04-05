//Qn 1. WACP To Create A Single List And Perform The Following Operations
//Menu Driven [Traversing, Insertion, Deletion, Searching, Reversing]
#include <stdio.h>
#include <stdlib.h>

// Structure definition for the node
struct node {
    int info;
    struct node *link;
};

struct node *start = NULL;

// 1. Traversing the list
void traverse() {
    struct node *ptr = start;
    if (ptr == NULL) {
        printf("Empty list\n");
        return;
    }
    printf("Linked List : ");
    while (ptr != NULL) {
        printf("%d->", ptr->info);
        ptr = ptr->link;
    }
    printf("NULL\n");
}

// 2. Insertion Operations
void insert_begin() {
    struct node *fresh = (struct node *)malloc(sizeof(struct node));
    printf("Enter value : ");
    scanf("%d", &fresh->info);
    fresh->link = start;
    start = fresh;
}

void insert_End() {
    struct node *ptr = start;
    struct node *fresh = (struct node *)malloc(sizeof(struct node));
    printf("Enter value : ");
    scanf("%d", &fresh->info);
    fresh->link = NULL;
    if (start == NULL) {
        start = fresh;
        return;
    }
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = fresh;
}

void insert_pos() {
    int pos, i;
    struct node *fresh, *ptr = start;
    printf("Enter position: ");
    scanf("%d", &pos);
    fresh = (struct node *)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d", &fresh->info);
    
    if (pos == 1) {
        fresh->link = start;
        start = fresh;
        return;
    }
    for (i = 1; i < pos - 1 && ptr != NULL; i++) {
        ptr = ptr->link;
    }
    if (ptr == NULL) {
        printf("Invalid position\n");
        return;
    }
    fresh->link = ptr->link;
    ptr->link = fresh;
}

// 3. Deletion Operations
void delete_begin() {
    struct node *temp;
    if (start == NULL) {
        printf("List is Empty\n");
        return;
    }
    temp = start;
    start = start->link;
    free(temp); // Document uses 'release'
}

void delete_End() {
    struct node *ptr = start, *prev;
    if (start == NULL) {
        printf("List is Empty\n");
        return;
    }
    if (start->link == NULL) {
        free(start);
        start = NULL;
        return;
    }
    while (ptr->link != NULL) {
        prev = ptr;
        ptr = ptr->link;
    }
    prev->link = NULL;
    free(ptr);
}

void delete_pos() {
    int pos, i;
    struct node *ptr = start, *temp;
    printf("Enter position: ");
    scanf("%d", &pos);
    if (start == NULL) {
        printf("List is Empty\n");
        return;
    }
    if (pos == 1) {
        temp = start;
        start = start->link;
        free(temp);
        return;
    }
    for (i = 1; i < pos - 1 && ptr->link != NULL; i++) {
        ptr = ptr->link;
    }
    if (ptr->link == NULL) {
        printf("Invalid position\n");
        return;
    }
    temp = ptr->link;
    ptr->link = temp->link;
    free(temp);
}

// 4. Searching
void search() {
    int key, pos = 1;
    struct node *ptr = start;
    printf("Enter value to search : ");
    scanf("%d", &key);
    while (ptr != NULL) {
        if (ptr->info == key) {
            printf("Found at position %d\n", pos);
            return;
        }
        ptr = ptr->link;
        pos++;
    }
    printf("Not found\n");
}

// 5. Reversing
void reverse() {
    struct node *prev = NULL, *curr = start, *next;
    while (curr != NULL) {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    start = prev;
    printf("List reversed successfully!\n");
}

// Main Menu
int main() {
    int choice, op;
    do {
        printf("\nMENU....\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at Ending\n");
        printf("3. Insert at position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from Ending\n");
        printf("6. Delete from position\n");
        printf("7. Searching\n");
        printf("8. Reverse\n");
        printf("9. Traverse\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert_begin(); break;
            case 2: insert_End(); break;
            case 3: insert_pos(); break;
            case 4: delete_begin(); break;
            case 5: delete_End(); break;
            case 6: delete_pos(); break;
            case 7: search(); break;
            case 8: reverse(); break;
            case 9: traverse(); break;
            default: printf("Invalid choice\n");
        }
        printf("\nDo you want to continue (1/0): ");
        scanf("%d", &op);
    } while (op == 1);

    return 0;
}

