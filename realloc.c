//realloc(increase or decrease) memory using the same pointer & size

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));            //allocate 20 bytes dynamic memory continuous
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

    ptr=realloc(ptr,8);
    printf("Now you can enter 8 element instead of 5:\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter element is:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\t",ptr[i]);
        printf("%d\n",&ptr[i]);
    }

    free(ptr);

return 0;
}