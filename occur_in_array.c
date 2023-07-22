#include<stdio.h>
#define n 3
void repeat(int arr[],int N,int m);
int main(){
    int arr[n],m;
    printf("Enter ele of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter ele to find occurance:");
    scanf("%d",&m);
    repeat(arr,n,m);
return 0;
}

void repeat(int arr[],int N,int m){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==m){
            count++;
        }
    }
    printf("Occurance of %d is %d",m,count);
    
}