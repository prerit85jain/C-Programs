#include<stdio.h>
int main(){
    float r,d,c,a;
    printf("Enter radius of the circle:");
    scanf("%f",&r);
    d=r/2;
    c=2*3.14*r;
    a=2*3.14*r*r;
    printf("Diameter: %.2f\nCircumference: %.2f\nArea: %.2f",d,c,a);
    return 0;
}