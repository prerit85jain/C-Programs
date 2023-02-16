#include<stdio.h>
#include<math.h>
int  main(){
    float s,a;
    printf("Enter side:\n");
    scanf("%f",&s);
    a=(sqrt(3)/4)*s*s;
    printf("Area: %.2f",a);
    return 0;
}