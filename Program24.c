//WAP to find  max b/w two numbers.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is maximum",a);
    }
    else if(a<b){
        printf("%d is maximum",b);
    }
    else{
        printf("Both are equal");
    }
    return 0;
}