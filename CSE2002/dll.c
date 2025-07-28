#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};


struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
};


void initialize(struct Node **head)
{
    *head = NULL;
};


void insertAtStart(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
};


void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
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
    newNode->prev = temp;
};


void insertAtIndex(struct Node **head, int index, int data)
{
    if (index == 0)
    {
        insertAtStart(head, data);
        return;
    }

    struct Node *newNode = createNode(data);
    struct Node *temp = *head;

    for (int i = 0; temp != NULL && i < index - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Index out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
};


void deleteAtStart(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = *head;
    *head = (*head)->next;

    if (*head != NULL)
    {
        (*head)->prev = NULL;
    }

    free(temp);
};


void deleteAtEnd(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    if (temp->prev != NULL)
    {
        temp->prev->next = NULL;
    }
    else
    {
        *head = NULL;
    }

    free(temp);
};


void deleteAtIndex(struct Node **head, int index)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = *head;

    for (int i = 0; temp != NULL && i < index; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Index out of bounds\n");
        return;
    }

    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    else
    {
        *head = temp->next;
    }

    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    free(temp);
};


void display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
};


int main()
{
    struct Node *head = NULL;
    int ch;
    int data;
    int index;

    while (1)
    {
        printf("1. Initialize List\n");
        printf("2. Insert at Start\n");
        printf("3. Insert at End\n");
        printf("4. Insert at Index\n");
        printf("5. Delete at Start\n");
        printf("6. Delete at End\n");
        printf("7. Delete at Index\n");
        printf("8. Display List\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            initialize(&head);
            printf("List initialized.\n");
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtStart(&head, data);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtEnd(&head, data);
            break;
        case 4:
            printf("Enter index: ");
            scanf("%d", &index);
            printf("Enter data: ");
            scanf("%d", &data);
            insertAtIndex(&head, index, data);
            break;
        case 5:
            deleteAtStart(&head);
            break;
        case 6:
            deleteAtEnd(&head);
            break;
        case 7:
            printf("Enter index: ");
            scanf("%d", &index);
            deleteAtIndex(&head, index);
            break;
        case 8:
            display(head);
            break;
        case 9:
            printf("Exiting...\n");
            return 0;
            break;
        default:
            printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
