#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
};

struct Node* insertAtIndex(struct Node *head, int data, int index)
{
    struct Node * new_node = (struct Node *) malloc(sizeof(struct Node));
    struct Node * temp = head;
    int i = 0;
    while (i!=index-1)
    {
        temp = temp->next;
        i++;
    }
    new_node->data = data;
    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}



int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 7;
    head->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    linkedListTraversal(head);
 
    int loc;
    printf("Enter the index:");
    scanf("%d", &loc);
    
    head = insertAtIndex(head, 43, loc);
    linkedListTraversal(head);
    
    return 0;
}