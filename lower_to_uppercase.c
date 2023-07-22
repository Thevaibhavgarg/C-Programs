#include<stdio.h>
#include<string.h>

void lowertoupper(char str[]);

int main(){
    char str[100];
    printf("Enter your string:-");
    fgets(str,100,stdin);
    puts(str);
    lowertoupper(str);
    puts(str);
    return 0;
}

void lowertoupper( char str[]){
    for(int i=0;str[i] != '\0';i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u'){
            str[i]=str[i]-32;
        }
    }
}