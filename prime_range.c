#include<stdio.h>
int main(){
    int i,s,e,count=0;
    char st;
    printf("Enter range:");
    scanf("%d%c%d",&s,&st,&e);
    while (s<=e)
    {
        count=0;
        i=2;
        while (i<=s/2)
        {
            if(s%i==0){
                count++;
                break;
            }
            i++;
        }
        if (count==0 && s!=1)
        {
            printf("%d \t",s);
        }
        s++;
    }
    return 0;
}