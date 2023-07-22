#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter your no.:");
    scanf("%d",&n);

    if (n>0)
    {
        printf("%d is a Natural no.",n);
    }
    else{
        printf("%d is a Not a Natural no.",n);
    }
    return 0;
}