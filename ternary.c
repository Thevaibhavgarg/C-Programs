#include<stdio.h>

int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    age>18 ? printf(" you are ADULT") : printf("you are NOT ADULT");
    return 0;
}