#include<stdio.h>
int binarySearch(int arr[], int l,int r ,int x){
    while(l<=r){
        int m = l+(r-1)/2;
        if(arr[m]==x){
            return m;
        }
        if (arr[m]<x)
        {
            l = m+1;
        }else{
            r = m-1;
        }
        
    }
    return -1;
}
void main(){
    
}