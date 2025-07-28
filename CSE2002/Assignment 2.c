/*Devam Pandey
23BCE10731
01-07-2024*/

#include<stdio.h>
#include <stdlib.h> 
void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	int L[n1], R[n2]; 

	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1 + j]; 

	i = 0; 

	j = 0; 

	k = l; 
	while (i < n1 && j < n2) { 
		if (L[i] <= R[j]) { 
			arr[k] = L[i]; 
			i++; 
		} 
		else { 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	while (i < n1) { 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) { 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 

void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) { 
		
		int m = l + (r - l) / 2; 

		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, r); 

		merge(arr, l, m, r); 
	} 
} 

void printArray(int A[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
} 

 

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++) {
        // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}





void swap(int arr[],int *i,int *j){
    int temp = arr[*i];
    arr[*i] = arr[*j];
    arr[*j] = temp;
}

int Partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while( i < j ){
        while(arr[i] <= pivot){
            i++;
        }
        while( arr[j] > pivot){
            j--;
        }
        if( i < j){
            swap(arr,&i,&j);
        }
    }
    swap(arr,&low,&j);
    return j;
}

void QuickSort(int arr[],int low,int high){
    if(low > high){
        return;
    }
        int m = Partition(arr,low,high);
        QuickSort(arr,low,m-1);
        QuickSort(arr,m+1,high);
}


// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
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

    printf("\nThe elements of the array are:\n");
    for (int i = 0; i < s; i++) {
        printf("%d ", arr[i]);
    }

    int n=sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,1,n-1);
    printf("\nsorted array using merge sort:%d ");
    printArray(arr, n);

    bubbleSort(arr, n);
    printf("\nSorted array using bubble sort: \n");
    printArray(arr, n);

    QuickSort(arr,1,n-1);
    printf("\nSorted array using Quick sort:%d ");
    printArray(arr, n);
    
    return 0;

}
 