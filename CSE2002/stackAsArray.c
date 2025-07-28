#include<stdio.h>
#include <stdlib.h>
#define MAX 100

struct Stack{
    int a[MAX];
    int top;
};

void push(struct Stack*s, int dt){
    if(s->top == MAX - 1){
        printf("stack is full\n");
    }
    else{
        s->top++;
        s->a[s->top]=dt;
        printf("element pushed\n");
    }

};

void pop(struct Stack*s){
    if (s->top == -1){
        printf("stack is empty\n");
    }
    else{
        int dt;
        dt = s->a[s->top];
        s->top--;
        printf("\nElement popped : %d\n", dt);
    }
};

void display(struct Stack* s){
    if (s->top==-1){
        printf("\nStack is empty");
    }
    else{
        int i;
        for(i=s->top; i>=0; i--){
            printf(" %d ", s->a[i]);
        }
    }

};

int main(){
    struct Stack* s;
    s ->top = -1;
    int c;
    int dt;
    while(1){
        printf("\n1. To push \n2. To pop \n3. To display \n4. to Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c){
            case 1:
                printf("\nData to be entered: ");
                scanf("%d", &dt);
                push(s,dt);
                break;
            case 2:
                pop(s);
                break;
            case 3:
                display(s);
                break;
            case 4:
                return 0;
                break;
            default:
                printf("Invalid input !!!");
        }
    }
    return 0;
}


