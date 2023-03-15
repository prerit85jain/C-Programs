//WAP to check character is vowel or consonant.
int main() {

    char x;
    scanf("%c",&x);
    if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        printf("Vowel.");
    }
    else if (x>='A'&&x<='z'){
        printf("Consonant.");
    }
    else{
        printf("Not an alphabet.");
    }
    return 0;
}