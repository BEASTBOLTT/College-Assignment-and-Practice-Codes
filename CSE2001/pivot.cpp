#include<iostream>
using namespace std; 

int getPivot(int arr[], int size){
    int s = 0;
    int e = size -1;

    while (s<e){
        int mid = (s+e)/2;
        if (arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;

        }
        
    }
    return s;
}

int main(){
    int arr[7]={4,5,6,0,1,2,3};
    cout<<getPivot(arr,7)<<endl;
    
}