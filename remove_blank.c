#include<stdio.h>
void blank(char st[]);
int main(){
     printf("Enter String:");
     char st[100];
     fgets(st,100,stdin);
     
     printf("\nString after modification:");
     blank(st);
return 0;
}

void blank(char st[]){
    char st2[100];
    int i;
    int j=0;
    for (i = 0; st[i]!='\0'; i++)
    {
        if (st[i]==' ')
        {
            continue;
        }
        else
        {
            st2[j]=st[i];
            j++;
        }    
    }
    st2[i]='\0';
    puts(st2);
}