#include<stdio.h>

int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("Lower case");
    }
    else if(ch>='A' && ch<='Z'){
        printf("Upper case");
    }
    else{
        printf("Not a english character");
    }
    return 0;
}