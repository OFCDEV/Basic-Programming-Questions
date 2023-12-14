#include<stdio.h>
void mergeTwo(int a1[],int a2[],int m,int n,int res[]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if (a1[i]<a2[j])
        {
            res[k++]=a1[i++];
        }else{
            res[k++] = a2[j++];
        }
        while(i<m){
            res[k++]=a1[i++];
        }
         while(j<n){
            res[k++]=a2[j++];
        }
        
    }
}
void main(){
    
}