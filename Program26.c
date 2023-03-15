//WAP to check number is -ve, +ve or zero.
#include<stdio.h>
int main(){
    int a;
    printf("Enter number:\n");
    scanf("%d",&a);
    if(a>0){
        printf("Number is positive");
    }
    else if(a<0){
        printf("Number is negative");
    }
    else{
        printf("Number is zero");
    }
    return 0;
}