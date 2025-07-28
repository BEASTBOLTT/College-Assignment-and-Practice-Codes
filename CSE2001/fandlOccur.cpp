#include<iostream>
using namespace std; 

int firstOccur(int arr[], int size, int key){
    int s = 0;
    int e = size -1;
    int ans = -1;
    

    while (s<=e){
        int mid = (s+e)/2;
        if (arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid - 1;

        }
        
        
    }
    return ans;
}



int lastOccur(int arr[], int size, int key){
    int s = 0;
    int e = size -1;
    int ans = -1;
    

    while (s<=e){
        int mid = (s+e)/2;
        if (arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid - 1;

        }
        
        
    }
    return ans;
}

int main(){
    int arr[8]={0,0,1,1,2,2,2,2};
    cout<<firstOccur(arr,8,2)<<endl;
    cout<<lastOccur(arr,8,2)<<endl;
    return 0;
}