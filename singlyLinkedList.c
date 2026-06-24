#include<stdio.h>
#include<stdlib.h>

// Define structure for node
struct Node
{
    int data;
    struct Node *next;
};

// Global head pointer
struct Node *head = NULL;

// Function declarations
void beginsert();
void display();

int main()
{
    int choice = 0;

    while(1)
    {
        printf("\n===== Singly Linked List =====\n");
        printf("1. Insert at Beginning\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                beginsert();
                break;

            case 2:
                display();
                break;

            case 3:
                printf("Program terminated.\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Insert node at beginning
void beginsert()
{
    struct Node *ptr;
    int element;

    ptr = (struct Node *)malloc(sizeof(struct Node));

    if(ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &element);

    ptr->data = element;
    ptr->next = head;
    head = ptr;

    printf("Node inserted successfully!\n");
}

// Display linked list
void display()
{
    struct Node *ptr;

    if(head == NULL)
    {
        printf("Linked List is empty.\n");
        return;
    }

    ptr = head;

    printf("Linked List Elements:\n");

    while(ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}