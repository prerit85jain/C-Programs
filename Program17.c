#include<stdio.h>
int main(){
    float p,t,r,si;
    printf("Enter Principle, Time, Rate:\n");
    scanf("%f%f%f",&p,&t,&r);
    si=p*r*t;
    printf("Simple Interest is: %.2f",si);
    return 0;
}