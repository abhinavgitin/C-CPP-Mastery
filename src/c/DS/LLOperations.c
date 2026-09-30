#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to insert an element at the beginning
void insertBeginning(struct Node **head)
{
    int element;

    printf("Enter the element: ");
    scanf("%d", &element);

    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = element;
    newNode->next = *head;

    *head = newNode;
}

// Function to insert an element at the end
void insertEnd(struct Node **head)
{
    int element;

    printf("Enter the element: ");
    scanf("%d", &element);

    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = element;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to insert an element at any position
void insertPosition(struct Node **head)
{
    int element;
    int position;

    printf("Enter the element: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &position);

    if (position <= 0)
    {
        printf("Invalid position\n");
        return;
    }

    if (position == 1)
    {
        struct Node *newNode = malloc(sizeof(struct Node));

        newNode->data = element;
        newNode->next = *head;

        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = element;
    newNode->next = temp->next;

    temp->next = newNode;
}

// Function to delete an element from the beginning
void deleteBeginning(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }

    struct Node *temp = *head;

    *head = temp->next;

    free(temp);

    printf("Element deleted\n");
}

// Function to delete an element from the end
void deleteEnd(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }

    struct Node *temp = *head;

    if (temp->next == NULL)
    {
        *head = NULL;
        free(temp);

        printf("Element deleted\n");
        return;
    }

    struct Node *previous = NULL;

    while (temp->next != NULL)
    {
        previous = temp;
        temp = temp->next;
    }

    previous->next = NULL;

    free(temp);

    printf("Element deleted\n");
}

// Function to delete an element from any position
void deletePosition(struct Node **head)
{
    int position;

    if (*head == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }

    printf("Enter the position: ");
    scanf("%d", &position);

    if (position <= 0)
    {
        printf("Invalid position\n");
        return;
    }

    if (position == 1)
    {
        struct Node *temp = *head;

        *head = temp->next;

        free(temp);

        printf("Element deleted\n");
        return;
    }

    struct Node *temp = *head;
    struct Node *previous = NULL;

    for (int i = 1; i < position && temp != NULL; i++)
    {
        previous = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    previous->next = temp->next;

    free(temp);

    printf("Element deleted\n");
}

// Function to display the linked list
void display(struct Node *head)
{
    struct Node *temp = head;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("\nHEAD -> ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Main function
int main()
{
    struct Node *head = NULL;
    int choice;

    do
    {
        printf("\n--- SINGLY LINKED LIST MENU ---\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at any position\n");
        printf("4. Delete at beginning\n");
        printf("5. Delete at end\n");
        printf("6. Delete at any position\n");
        printf("7. Display\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertBeginning(&head);
            break;

        case 2:
            insertEnd(&head);
            break;

        case 3:
            insertPosition(&head);
            break;

        case 4:
            deleteBeginning(&head);
            break;

        case 5:
            deleteEnd(&head);
            break;

        case 6:
            deletePosition(&head);
            break;

        case 7:
            display(head);
            break;

        case 8:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 8);

    return 0;
}