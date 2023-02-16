#include<stdio.h>
int main(){
    float a,b,c,d,e,sum,avg,per;
    printf("Enter 5 subjects mark:\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=sum/5;
    per=(sum/500)*100;
    printf("Sum: %.2f\nAverage: %.2f\nPercentage: %.2f",sum,avg,per);
    return 0;
}