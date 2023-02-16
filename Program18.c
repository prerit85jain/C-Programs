#include<stdio.h>
#include<math.h>
int main(){
    float p,t,r,ci;
    printf("Enter Principle, Time, Rate:\n");
    scanf("%f%f%f",&p,&t,&r);
    ci=p*(1+pow((r/100),t));
    printf("Compound Interest is: %.2f",ci);
    return 0;
}