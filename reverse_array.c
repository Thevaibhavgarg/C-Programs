#include<stdio.h>
#define n 3
void reverse(int arr[],int N);
void print(int arr[],int N);
int main(){
    // int n;
    // printf("Enter no. of ele:");
    // scanf("%d",n);
    int arr[n];
    printf("Enter ele of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array before reverse:");
    print(arr,n);
    reverse(arr,n);
    printf("\nArray after reverse: ");
    print(arr,n);
    
return 0;
}
void print(int arr[],int N)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }

}

void reverse(int arr[],int N){
    for (int i = 0; i <= n/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    
}