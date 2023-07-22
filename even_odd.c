#include<stdio.h>

int main(){
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);
    if(a%2==0){
        printf("The %d is a even no.",a);
    }
    else{
        printf("The %d is a odd no.",a);
    }                                     
    
    return 0;
}