#include<stdio.h>
void upperVowel(char st[]);
int main(){
     printf("Enter String:");
     char st[100];
     fgets(st,100,stdin);
     upperVowel(st);
     printf("\nString after modification:");
     puts(st);
return 0;
}

void upperVowel(char st[]){
    for (int i = 0; st[i]!='\0'; i++)
    {
        if (st[i]=='a'||st[i]=='e'||st[i]=='o'||st[i]=='i'||st[i]=='u')
        {
            st[i]=st[i]-32;
        }
        
    }
    
}