#include<stdio.h>

int main(){
    int a,b;
    printf("Enter Two Numbers:");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("The smallest no. is:%d",b);
    }
    else if (a==b) {
        printf("Both are equal");
    }
    else{
        printf("The smallest no. is:%d",a);
    }
    return 0;
}