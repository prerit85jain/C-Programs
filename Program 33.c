#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tueday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thusday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("Invalid Input");
	}
	return 0;
}
