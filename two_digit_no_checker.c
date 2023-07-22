#include<stdio.h>

int main(){
    int a;
    printf("Enter Number:");
    scanf("%d",&a);                                     //taking inputs
    printf("%d",a>9 && a<100);                          // if true printing 1 else 0
    return 0;
}