#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
}
void swapA(int arr[], int n){
    for(int i; i <= n; i=i+2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
    printArray(arr,n);
}


int main(){
    int a[5] = {3,6,1,9,5};
    swapA(a,5);
    return 0;
}