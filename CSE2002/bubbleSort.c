/* Devam Pandey
23BCE10731
01-07-2024 */

#include <stdio.h>

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

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
	int s;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);

    int arr[s];
    printf("Enter %d elements:\n", s);

    for (int i = 0; i < s; i++) {
        scanf("%d", &arr[i]);
    }

    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}




/*Enter the number of elements in the array: 5
Enter 5 elements:
7
4
75
34
88
Unsorted array: 
7 4 75 34 88
Sorted array:
4 7 34 75 88*/