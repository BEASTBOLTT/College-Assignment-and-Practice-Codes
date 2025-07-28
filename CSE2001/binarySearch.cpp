#include<iostream>
using namespace std; 

int binary(int arr[], int size, int key){
    int s = 0;
    int e = size -1;

    while (s<=e){
        int mid = (s+e)/2;
        if (arr[mid]==key){
            return mid;
        }

        if (key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid - 1;

        }
        
    }
    return -1;
}

int main(){
    int arr[7]={0,1,2,3,4,5,6};
    cout<<binary(arr,7,3)<<endl;
    
}