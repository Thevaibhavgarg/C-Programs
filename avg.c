#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter  Three Numbers:");
    scanf("%d %d %d",&a,&b,&c);
    int avg = (a+b+c)/3;
    printf("Average of %d %d %d is:%d",a,b,c,avg);                                     
    return 0;
}