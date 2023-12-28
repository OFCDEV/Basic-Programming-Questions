#include<stdio.h>
int multiplication(int range, int num){
    int mul;
    for (int i = 0; i < range; i++)
    {
        mul = num*i;
        printf("%d * %d = %d",num,i,mul);
        printf("\n");
    }
    
}
void main(){
    
}