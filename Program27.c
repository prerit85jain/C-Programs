//WAP to check number is divisible by 5 and 11 or not.
#include<stdio.h>
int main(){
    int a;
    printf("Enter number:\n");
    scanf("%d",&a);
    if(a%5 ==0 && a%11==0){
        printf("Number is divisible");
    }
    else{
        printf("Number is not divisible");
    }
    return 0;
}