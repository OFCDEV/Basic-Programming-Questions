#include<stdio.h>
void arrayRev(int arr[],int start, int end){
    int temp;
    while (start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
    
}
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    
}

void main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before reversing the elements are:\n");
    printArray(arr,n);
    printf("\nAfter reversing the elements are:\n");
    arrayRev(arr,0,n-1);
    printArray(arr,n);

}