void display(struct Queue* q){
    int i;
    for(i= q->front; i <= q->rear; i++){
        printf("%d ", q->a[i]);
    }
};