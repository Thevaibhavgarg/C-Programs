#include<stdio.h>
int countLength(char arr[]);
int main(){
    printf("Enter String:");
    char name[100];
    fgets(name,100,stdin);
    puts(name);
    printf("Length of string:%d",countLength(name));
    
    // char *canChange="Hello World";
    // puts(canChange);
    // canChange="Hello";
    // puts(canChange);

    // char cannotChange[]="Hello World";
    // puts(cannotChange);
    // cannotChange="Hello";
    // puts(cannotChange);

    return 0;
}
int countLength(char arr[]){
    int count=0;
    for (int i = 0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count-1;
}

