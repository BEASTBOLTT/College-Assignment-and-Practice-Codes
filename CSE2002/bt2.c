#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left, *right;
};


struct Node* create()
{
    struct Node* temp;
    int data;
    int choice;
    temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Press 0 to exit");
    printf("\nPress 1 for new Node");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    if (choice == 0)
    {
        return 0;
    }
    else
    {
        printf("Enter the data:");
        scanf("%d", &data);
        temp->data = data;
        printf("Enter the left child of %d", data);
        temp->left = create();
        printf("Enter the right child of %d", data);
        temp->right = create();
        return temp;
    }
}

void main()
{
    struct Node *root;
    root = create();
}