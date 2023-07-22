#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    //clrscr();
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch>='0'&& ch<='9'){
        printf("%c is a DIGIT",ch);
    }
    else{
        printf("%c is a  NOT DIGIT",ch);
    }
}