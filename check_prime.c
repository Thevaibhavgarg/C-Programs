#include<stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    for (int i = 2 ;  i <n;i++)
    {
        if(n%i==0){
            printf("%d is not a PRIME NO.",n);
            return 0;
        }
    }
    printf("%d is a PRIME NO.",n);
    return 0;
}