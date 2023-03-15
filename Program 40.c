#include<stdio.h>
int main(){
	int a,b,c;
	printf("1. +\n2. -\n3. *\n4. /\nEnter Your Choice:");
	scanf("%d",&c);
	printf("Enter 1st and 2nd number:");
	scanf("%d%d",&a,&b);
	switch(c){
		case 1:
			printf("%d",a+b);
			break;
		case 2:
			printf("%d",a-b);
			break;
		case 3:
			printf("%d",a*b);
			break;
		case 4:
			printf("%d",a/b);
			break;
		default:
			printf("Invalid Input");
	}
	return 0;
}
