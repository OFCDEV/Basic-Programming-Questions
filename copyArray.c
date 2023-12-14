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
    
}