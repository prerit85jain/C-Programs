#include<stdio.h>
int main(){
	int a; float b; char c;
	printf("Enter a character:");
	scanf("%c",&c);
	printf("\n Enter a integer:");
	scanf("%d",&a);
	printf("\n Enter a float:");
	scanf("%f",&b);
	printf("\n Integer is:%d",a);
	printf("\n Float is:%.2f",b);
	printf("\n Character is:%c",c);
	
	return 0;
}
