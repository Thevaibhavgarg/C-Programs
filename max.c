#include<stdio.h>
int max(int*x,int*y){
    if (*x>*y)
        return *x;
    return *y;
}
int main(){
    int x,y;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value of y:");
    scanf("%d",&y);
    printf("VGreater value btw x and y is:%d\n",max(&x,&y));
    return 0;
}