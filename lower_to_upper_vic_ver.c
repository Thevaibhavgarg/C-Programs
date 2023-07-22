#include<stdio.h>
void viceVersa(char st[]);
int main(){
     printf("Enter String:");
     char st[100];
     fgets(st,100,stdin);
     viceVersa(st);
     printf("\nString after modification:");
     puts(st);
return 0;
}

void viceVersa(char st[]){
    for (int i = 0; st[i]!='\0'; i++)
    {
        if (st[i]>=65 && st[i]<=90)
        {
            st[i]=st[i]+32;
        }
        else if (st[i]==' ')
        {
            continue;
        }
        
        else
        {
            st[i]=st[i]-32;
        }
        
        
    }
    
}