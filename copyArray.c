//WAP to store the distinct elements of an array into another array
#include<stdio.h>
#include<stdbool.h>
bool isInArray(int arr[],int size,int value){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return true;
        }else
            return false;
        
    }
    
}
void main(){
    int arr[] = {4,7,7,3,2,5,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res[size];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(!isInArray(res,size,arr)){
            res[count++] = arr[i];
        }
    }
    printf("Resulting Array:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d",res[i]);
    }
    
    
}