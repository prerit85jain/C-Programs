#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	switch(a>0){
		case 1:
			printf("Number is Positive");
			break;
		case 0:
			switch(a<0){
				case 1:
					printf("Number is Negative");
					break;
				case 0:
					printf("Number is Zero");
			}
	}
	return 0;
}
