#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Stack{
    struct Node* top;
};

void display(struct Stack* stack)
{
    if(stack->top == NULL){
        printf("Empty");
    }
    else{
        struct Node * newNode = (struct Node *) malloc(sizeof(struct Node));
        newNode = stack->top;
        while (newNode != NULL) {
            printf("%d\n", newNode->data);
            newNode = newNode->next;
        }
    }
};



void push(struct Stack* stack, int data){
    struct Node * newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;

};

int pop(struct Stack* stack){
    if(stack->top == NULL){
        printf("Empty");
    }
    else{
        struct Node * newNode = (struct Node *) malloc(sizeof(struct Node));
        newNode = stack->top;
        stack->top = stack->top->next;
        int temp = newNode->data;
        free(newNode);
        return temp;
    }

};

 
int main()
{
    struct Stack* stack;
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
                push(stack,dt);
                break;
            case 2:
                popped=pop(stack);
                printf("\nPopped data: %d", popped);
                break;

            case 3:
                display(stack);
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
