#include<stdio.h>

int main(){
    int a,b;
    printf("Enter value of length of a rectangle:");
    scanf("%d",&a);
    printf("Enter value of width of a rectangle:");
    scanf("%d",&b);
    printf("Perameter of a rectangle is:%d",2*(a+b));
    return 0;
}