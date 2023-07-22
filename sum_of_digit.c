#include<stdio.h>
int sumdt(int n){
    int sum=0;
    while (n>0)
    {
        int rem=n%10;
        sum=sum+rem;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter no.:-");
    scanf("%d", &n);
    printf("Sum of digit of %d no. is: %d",n,sumdt(n));
    return 0;
}