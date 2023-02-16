#include<stdio.h>
int main(){
	int a,b,sum,s,m,d;
	printf("Enter first variable:");
	scanf("%d",&a);
	printf("Enter second variable:");
	scanf("%d",&b);
	sum=a+b;
	s=a-b;
	m=a*b;
	d=a/b;
	printf("Sum is:%d\n",sum);
	printf("Difference is:%d\n",s);
	printf("Multiplication is:%d\n",m);
	printf("Division is:%d\n",d);
	
	return 0;
}
