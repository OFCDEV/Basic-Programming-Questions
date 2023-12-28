#include<stdio.h>
int armStrong(int num){
    int temp =num;
    int p=0;
    while(num>0){
        int rem = num%10;
        p = (p)+(rem*rem*rem);
        num = num/10;
    }
    if(temp == p){
        printf("It is Armstrong number");
    }
    else{
        printf("It is not.");
    }
}
void main(){
    // int num=153;
    armStrong(152);
}