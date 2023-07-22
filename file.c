#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Test.txt","r");
    if (fptr==NULL)
    {
        printf("file does not exits\n");
        printf("now we create new file\n");
        fptr=fopen("Test.txt","a");
    }
    char st[100];
    printf("%c\n",fgetc(fptr));
    fscanf(fptr,"%[^\n]%*c\n",&st);
    printf("%s\n",st);
    fclose(fptr);
return 0;
}