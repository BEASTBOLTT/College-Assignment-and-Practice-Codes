#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
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
}

void insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    linkedListTraversal(ptr);

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

void insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
 
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    linkedListTraversal(head);
}

void deleteAtEnd(struct Node *head){
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

};
void deleteAtFirst(struct Node *head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    linkedListTraversal(head);

};

void deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    linkedListTraversal(head);
};

 
int main()
{
    struct Node *head;
    head = (struct Node *)malloc(sizeof(struct Node));
    int c;
    int dt;
    int loc;
    printf("\nData to initialize: ");
    scanf("%d", &dt);
    head->data = dt;
    head->next = NULL;
    while(1) {
        printf("\n1. insert at start \n2. insert at specific index \n3. insert at end \n4. Delete at start \n5. delete at specific index \n6. delete at end \n7. display the linked list \n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&c);

        switch (c){

            case 1:
                printf("\nData to be entered: ");
                scanf("%d", &dt);
                insertAtFirst(head,dt);
                break;
                
            case 2:
                printf("Enter the index:");
                scanf("%d", &loc);
                printf("\nData to be entered: ");
                scanf("%d", &dt);
                head = insertAtIndex(head, dt, loc);
                linkedListTraversal(head);
                break;
                
            case 3:
                printf("\nData to be entered: ");
                scanf("%d", &dt);
                insertAtEnd(head,dt);
                break;
                
            case 4:
                    deleteAtFirst(head);
                break;

            case 5:
                printf("Enter the index:");
                scanf("%d", &loc);
                deleteAtIndex(head,loc);
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
