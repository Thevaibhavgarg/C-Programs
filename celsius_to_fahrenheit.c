#include<stdio.h>
float convertTemp(float celsius){
    float far=celsius*(9.0/5.0)+32;
    return far;
}
int main(){
    float n;
    printf("Enter Temperature:-");
    scanf("%f",&n);
    printf("Temperature %f °C is equal to:- %f °f",n,convertTemp(n));
    return 0;
}