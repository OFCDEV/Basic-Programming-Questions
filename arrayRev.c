#include<stdio.h>
void arrayRev(int arr[],int start, int end){
    int temp;
    while (start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end]= temp;
    }
    
}

void main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
}