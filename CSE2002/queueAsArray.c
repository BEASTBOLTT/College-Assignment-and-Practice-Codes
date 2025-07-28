#include<stdio.h>
#include<stdlib.h>

#define MAX 100

struct Queue {
    int a[MAX];
    int rear;
    int front;
};

void initialize(struct Queue* q){
    q->front = q->rear = -1;
    printf("Queue initialized");
};

void insert(struct Queue* q, int dt){
    if (q->rear == MAX-1){
        printf("Full");
    }
    else{
        q->rear++;
        q->a[q->rear] = dt;
    }
    if(q->front ==-1){
        q->front = 0;
    }
};

void display(struct Queue* q){
    int i;
    for(i= q->front; i <= q->rear; i++){
        printf("%d ", q->a[i]);
    }
};

void delete(struct Queue* q){
    int dt;
    dt = q->a[q->front];
    q->front++;
    printf("\n Deleted element: %d ", dt);
};

int main(){
    struct Queue* q;
    int c;
    int dt;
    while(1){
        printf("\n1. To Intialize \n2. To insert \n3. To delete \n4. to display \n5. To exit");
        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c){
            case 1:
                initialize(q);
                break;

            case 2:
                printf("\nData to be entered: ");
                scanf("%d", &dt);
                insert(q,dt);
                break;

            case 3:
                delete(q);
                break;

            case 4:
                display(q);
                break;

            case 5:
                return 0;
                break;
            
            default:
                printf("Invalid Input!!");
                break;
        }
    }
    return 0;
}