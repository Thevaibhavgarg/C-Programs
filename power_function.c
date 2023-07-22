#include<stdio.h>
double pow1(double base,double power){
    int ans=1;
    for (int i = 0; i < power; i++)
    {
        ans=base*base;
    }
    return ans;
    
}
int main(){
    double n,p;
    printf("Enter base:-");
    scanf("%lf", &n);
    printf("Enter power:-");
    scanf("%lf", &p);
    printf("%lf rest to power %lf is: %lf",n,p,pow1(n,p));
    return 0;
}