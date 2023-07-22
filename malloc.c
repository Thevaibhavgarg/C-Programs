//allocate memory but not gurrenty that it is initialize with 0

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));            //allocate 20 bytes dynamic memory
    printf("Enter 5 no.:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter element is:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",ptr[i]);
        printf("%d\n",&ptr[i]);
    }
    
    free(ptr);
    
return 0;
}