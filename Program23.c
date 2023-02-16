//Check character is alphabate or not.
#include<stdio.h>
int main(){
    char a;
    printf("Enter character:\n");
    scanf("%c",&a);
    if(a>='A' && a<='z'){
        printf("Character");
    }
    else{
        printf("Not");
    }
    return 0;
}