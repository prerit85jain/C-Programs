//WAP to check character is alphabet, digit or special.
#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c>='A' && c<='z'){
    printf("Character is alphabet");
    }
    else if(c>='0' && c<='9'){
    printf("Character is digit");
    }
    else{
        printf("Character is special");
    }
    return 0;
}