#include<stdio.h>
void swap(int*a,int*b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int x,y;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value of y:");
    scanf("%d",&y);
    swap(&x,&y);
    printf("After swapping:\n");
    printf("Value of x:%d\n",x);
    printf("Value of x:%d\n",y);
    return 0;
}