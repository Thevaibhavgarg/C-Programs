#include<stdio.h>
int fac(int n);
int main(){
    int n;
    printf("Enter no.:-");
    scanf("%d",&n);
    printf("Factorial of %d is:- %d",n,fac(n));
    return 0;
}
int fac(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    return fac(n-1)*n;
}