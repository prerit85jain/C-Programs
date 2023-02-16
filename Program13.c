#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter two angles:");
    scanf("%f%f",&a,&b);
    c=180-(a+b);
    printf("Third angle is: %.2f",c);
    return 0;
}