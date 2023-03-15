#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	switch(a%2==0){
		case 1:
			printf("%d is Even",a);
			break;
		case 0:
			printf("%d is Odd",a);
			break;
	}
	return 0;
}

