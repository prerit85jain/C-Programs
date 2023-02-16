#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    printf("Enter base and power:");
    scanf("%f%f",&a,&b);
    printf("%.4f",pow(a,b));
    return 0;
}