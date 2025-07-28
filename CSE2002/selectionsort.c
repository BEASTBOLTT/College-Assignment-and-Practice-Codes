#include<stdio.h>

int main()
{
    int arr[6]={5,1,8,7,3,2};
    int min;
    int k=0;
    for (int i=0; i<6; i++)
    {
        min = k+i;

        for (int j=i; j<6; j++)
        {
            if (arr[min]>arr[j])
            {
                min=j;
            }
        
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

        
        

    }
        for (int i=0; i<6; i++){
            printf("%d",arr[i]);
        }
    return 0;
}