#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("odd.txt","a");
    
    int n;
    printf("Enter no.:");
    scanf("%d",&n);
    fprintf(fptr,"\nOdd No. from 1 to %d is:\n",n);
    for(int i=1;i<=n;i++){
        if(i%2 != 0){
            fprintf(fptr,"%d\t",i);
        }
    }
    fclose(fptr);
return 0;
}