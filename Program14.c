#include<stdio.h>
int main(){
    float h,b,a;
    printf("Enter height and base:");
    scanf("%f%f",&h,&b);
    a=(b*h)/2;
    printf("Area: %.2f",a);
    return 0;
}