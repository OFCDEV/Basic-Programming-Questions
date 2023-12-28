#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
void main(){
    int num;
    printf("Enter the number that you want the factorial:");
    scanf("%d",&num);
    printf("The factorial of %d is %d.",num,fact(num));
}