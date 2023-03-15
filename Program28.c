//WAP to check number is even or odd.
#include<stdio.h>
int main(){
    int a;
    printf("Enter number:\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}