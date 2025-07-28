#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the doubly linked list
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to create a new node
struct Node* initialize(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void linkedListTraversal(struct Node* node) {
    struct Node* last;
    printf("Traversal in forward direction:\n");
    while (node != NULL) {
        printf("%d ", node->data);
        last = node;
        node = node->next;
    }

    printf("\nTraversal in reverse direction:\n");
    while (last != NULL) {
        printf("%d ", last->data);
        last = last->prev;
    }
};


// Function to insert a node at the front of the doubly linked list
void insertAtFirst(struct Node* head, int data) {
    struct Node* newNode = initialize(data);
    newNode->next = head;
    if (head != NULL) {
        (head)->prev = newNode;
    }
    head = newNode;
}

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = initialize(data);
    struct Node* last = head;

    if (head == NULL) {
        head = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
    newNode->prev = last;
}



void deleteNode(struct Node* head, struct Node* del) {
    if (head == NULL || del == NULL) {
        return;
    }

    if (head == del) {
        head = del->next;
    }

    if (del->next != NULL) {
        del->next->prev = del->prev;
    }

    if (del->prev != NULL) {
        del->prev->next = del->next;
    }

    free(del);
}

void deleteAtEnd(struct Node* head){
    struct Node *te = head;
    struct Node *mp = head->next;
    while(mp->next !=NULL)
    {
        te = te->next;
        mp = mp->next;
    }
    
    te->next = NULL;
    free(mp);
    linkedListTraversal(head);
}

// Function to print the doubly linked list

int main()
{
    struct Node* head;
    head = (struct Node *)malloc(sizeof(struct Node));
    int c;
    int dt;
    int loc;
    struct Node* del;
    
    while(1) {
        printf("\n1. to initialize \n2.insert at start \n3. insert at end \n4. Delete at start \n5. delete at specific index \n6. delete at end \n7. display the linked list \n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&c);

        switch (c){

            case 1:
                printf("\ndata to initialize: ");
                scanf("%d", &dt);
                head=initialize(dt);
                break;
            case 2:
                printf("\ndata to be entered: ");
                scanf("%d", &dt);
                insertAtFirst(head,dt);
                break;
                
            case 3:
                printf("\ndata to be entered: ");
                scanf("%d", &dt);
                insertAtEnd(head,dt);
                break;
                
            case 4:
                    deleteNode(head,0);
                break;

            case 5:
                printf("Enter the index:");
                scanf("%d", &del);
                deleteNode(head,del);
                break;

            case 6:
                deleteAtEnd(head);
                break;

            case 7:
                linkedListTraversal(head);
                break;

            case 8:
                return 0;
                break;
                    
            default:
                printf("Invalid Input!!!");
                break;
        
         }
    }

    return 0;
}