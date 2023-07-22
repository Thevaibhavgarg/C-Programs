#include<stdio.h>
#include<string.h>
int main(){
    
    printf("Enter String:");
    char name[100];
    fgets(name,100,stdin);
    int length=strlen(name);  //strlen()
    printf("Length of string:%d",length-1);
    
    printf("\n Enter String2:");
    char name2[100];
    fgets(name2,100,stdin);
    printf("\n comparing s1 & s2:%d",strcmp(name,name2));          //string comp
    printf("\n catination s1 & s2:");
    strcat(name,name2);               //catination str
    puts(name);
    printf("\n copy s2 to s1:");
    strcpy(name,name2);               //copy str
    puts(name);

    
return 0;
}