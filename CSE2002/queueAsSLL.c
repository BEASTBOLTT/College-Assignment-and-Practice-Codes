#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};

void display(struct Queue* queue)
{
    if(queue->front = queue->rear = NULL){
        printf("Queue is empty\n");
    }
    struct Node* temp = queue->front;
    while (temp != NULL) {
        printf("%d", temp->data);
        temp = temp->next;
    }
};


void push(struct Queue* queue, int dt){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
    } 
    else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
};

int pop(struct Queue* queue){
    if(queue->front = queue->rear = NULL){
        printf("Queue is empty\n");
    }
    else{
        struct Node* temp = queue->front;
        int popped = temp->data;
        queue->front = queue->front->next;
        if (queue->front == NULL) {
            queue->rear = NULL;
        }
        free(temp);
        return popped;
    }
};


int main(){
    struct Queue* queue;
    int c;
    int dt;
    int popped;
    while(1) {
        printf("\n1. Push \n2. Pop \n3. display \n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&c);

        switch (c){

            case 1:
                printf("\nData to be entered: ");
                scanf("%d", &dt);
                push(queue,dt);
                break;
            case 2:
                popped = pop(queue);
                printf("\nPopped data: %d", popped);
                break;

            case 3:
                display(queue);
                break;

            case 4:
                return 0;
                break;
                    
            default:
                printf("Invalid Input!!!");
                break;
        
         }
    }

    return 0;
}