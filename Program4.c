#include<stdio.h>
int main(){
    int l,b,p;
    printf("Enter length and breath");
    scanf("%d%d",&l,&b);
    p=2*(l+b);
    printf("Perameter of rectangle: %d",p);
    return 0;
}