// WAP to check year is leap or not.
#include<stdio.h>
int main(){
    int y;
    printf("Enter Year:\n");
    scanf("%d",&y);
    if((y % 4 == 0 && y % 100 != 0) || y% 400 == 0){
        printf("Year is leap");
    }
    else
    {
        printf("Not");
    }
    return 0;
}