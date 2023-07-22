#include<stdio.h>
#include<string.h>
void salting(char password[]);
int main(){
    printf("Enter Password:");
    char password[100];
    scanf("%s",password);
    salting(password);
return 0;
}
void salting(char password[]){
    char salt[]="@1A-Z";
    char newPass[200];
    strcpy(newPass,password);
    strcat(newPass,salt);
    printf("New Password:");
    puts(newPass);
}