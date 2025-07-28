#include <stdio.h>

void waitingTime(int pr[], int n, int bt[], int wt[])
{

    wt[0] = 0; // wt for 1st is always 0
    for (int i = 1; i < n; i++)
    {
        wt[i] = bt[i - 1] + wt[i - 1];
    }
};

void turnAroundTime(int pr[], int n, int bt[], int wt[], int tat[])
{

    for (int i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
    }
};

void avgTime(int pr[], int n, int bt[])
{

    int wt[n];
    int tat[n];
    int total_wt = 0;
    int total_tat = 0;

    waitingTime(pr, n, bt, wt);

    turnAroundTime(pr, n, bt, wt, tat);

    printf("Processes   Burst time   Waiting time   Turn around time\n");
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("   %d ",(i+1));
        printf("           %d ", bt[i] );
        printf("           %d",wt[i] );
        printf("           %d\n",tat[i] ); 
    }
    float s = (float)total_wt / (float)n;
    float t = (float)total_tat / (float)n;
    printf("Average waiting time = %f", s);
    printf("\n");
    printf("Average turn around time = %f ", t);

};

int main(){

    int n;
    printf("Enter the number of processes to process: ");
    scanf("%d", &n);
    int pr[n];
    for (int i = 0; i < n; i++){
        printf("Enter the process: ");
        scanf("%d",&pr[i]);
    }

    int bt[n];
    
    for (int j = 0; j < n; j++){
        printf("Enter the burst time: ");
        scanf("%d",&bt[j]);
    }

    avgTime(pr, n,  bt); 
    return 0; 

}