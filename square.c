#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    double ans=pow(n,2);
    printf("The square of %d is:%f",n,ans);
    return 0;
}