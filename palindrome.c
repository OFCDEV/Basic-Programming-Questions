#include<stdio.h>
int palindrome(int orgNum){
    int rev=0;
    int num = orgNum;
    while(num>0){
        rev = 10*rev+num%10;
        num=num/10;
    }
    if(rev == num){
        printf("It is a palindrome.");
    }else{
        printf("Not");
    }
}
void main(){
    // int n;
    // printf("Enter the number you want to check:\n");
    // scanf("%d",&n);
    int check = palindrome(12321);
    printf("%d",check);
}