#include<stdio.h>
int reversing(int num){
    int revNum =0;
    while (num>0)
    {
        revNum = 10*revNum + num%10;
        num=num/10;
    }
    return revNum;
    
}
void main(){
    int n;
    printf("Enter the number you want to reverse:\n");
    scanf("%d",&n);
    int res = reversing(n);
    printf("%d",res);
}