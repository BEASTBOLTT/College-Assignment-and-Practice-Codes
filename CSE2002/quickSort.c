/* Devam Pandey
23BCE10731
01.07.2024*/

#include<stdio.h> 
 
void swap(int ar[],int *i,int *j){ 
 
    int temp = ar[*i]; 
    ar[*i] = ar[*j]; 
    ar[*j] = temp; 
 
} 
 
int Partition(int ar[],int low,int high){ 
 
    int pivot = ar[low]; 
    int i = low; 
    int j = high; 
     
    while( i < j ){ 
        while(ar[i] <= pivot){ 
            i++; 
            } 
        while( ar[j] > pivot){ 
            j--; 
            } 
     
        if( i < j){ 
           swap(ar,&i,&j); 
        } 
} 
    swap(ar,&low,&j); 
     
    return j; 
 
} 
 
void QuickSort(int ar[],int low,int high){ 
 
    if(low > high){ 
        return; 
    } 
 
        int m = Partition(ar,low,high); 
     
        QuickSort(ar,low,m-1); 
QuickSort(ar,m+1,high); 
} 
int main(){ 
    int s;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &s);

        int arr[s];
        printf("Enter %d elements:\n", s);

        for (int i = 0; i < s; i++) {
            scanf("%d", &arr[i]);
        }

     
    int n = sizeof(arr)/sizeof(arr[0]); 
    QuickSort(arr,0,n-1); 
    printf("\nSorted array:");
    for(int i=0;i<n;i++){ 
        printf("%d ", arr[i]); 
    } 
    return 0; 
} 







/*Enter the number of elements in the array: 5
Enter 5 elements:
9
3
7
5
11

Sorted array:3 5 7 9 11 */