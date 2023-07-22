#include<stdio.h>
#include<math.h>

int main(){
    int n,sum=0;
    printf("Enter your no.:");
    scanf("%d",&n);

    for (int i = n; i > 0; i--)
    {
        sum+=i;
        printf("%d \t",i);
    }
    printf("\nSum of %d Natural no.is:%d",n,sum);
    return 0;
}