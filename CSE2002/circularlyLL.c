#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void circularLLTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}

struct Node * insertInCLL(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}



int main()
{
    struct Node* head;
    head = (struct Node *)malloc(sizeof(struct Node));
    int dt;
    int n;
    printf("No. of nodes you want in your list:");
    scanf("%d",&n);
    printf("%d",n);
    int i = 0;
    while(i != n){
        printf("\nData to be entered: ");
        scanf("%d", dt);
        head = insertInCLL(head,dt);
        i++;
    }
    circularLLTraversal(head);
    return 0;
}