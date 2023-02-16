#include<stdio.h>
int main(){
    float d,w,y;
    printf("Enter days:");
    scanf("%f",&d);
    w=d/7;
    y=d/365;
    printf("Days: %f\nWeek: %f\nYear: %f",d,w,y);
    return 0;
}