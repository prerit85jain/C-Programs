#include<stdio.h>
int main(){
    float c,m,k;
    printf("Enter length in cm:");
    scanf("%f",&c);
    m=c/100;
    k=m/1000;
    printf("Centermeter: %f\nMeter: %f\nKilometer: %f",c,m,k);
    return 0;
}