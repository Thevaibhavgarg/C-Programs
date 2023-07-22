#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Test2.txt","a");
    fputc('M',fptr);
    fprintf(fptr,"%c",'n');
    fclose(fptr);
return 0;
}