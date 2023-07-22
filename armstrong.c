#include<stdio.h>
#include<math.h>

int main(){
    int no,arm,rem,n;
    double ans=0;
    printf("Enter no. of digit:");
    scanf("%d",&n);
    printf("Enter your no.:");
    scanf("%d",&no);
    arm=no;
    while (no>0)
    {
        rem=no%10;
        ans+=pow(rem,n);
        no/=10;
    }
    if(arm==ans){
        printf("%f is a Armstrong no.",ans);
    }
    
    else{
        printf("%d is a Not a Armstrong no.",arm);
    }
    return 0;
}