#include<stdio.h>
#include<math.h>
double sr(double n){
    return sqrt(n);
}
int main(){
    double n;
    printf("Enter no.:-");
    scanf("%lf", &n);
    printf("Squre root of %lf no. is: %lf",n,sr(n));
    return 0;
}