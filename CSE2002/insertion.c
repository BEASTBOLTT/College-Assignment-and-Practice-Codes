#include<stdio.h>


int main(){
    int a[6] = {5,1,8,7,2,3};
    for(int i = 1; i <6 ; i++)
    {
        int key = a[i];
        int j=i-1;
        while (j>=0 && key<a[j]){
            a[j+1]=a[j];
            a[j]=key;
            j--;

        }
        
    }

printf("\n%d",a[4]);
return 0;
}