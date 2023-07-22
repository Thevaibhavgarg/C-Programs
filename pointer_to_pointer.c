#include<stdio.h>
int main(){
    int age =22;
    int *ptr=&age;
    int **pptr =&ptr;
    
    printf("Values:\n");
    printf("Value of age through age is:%17d\n",age);
    printf("Value of age through pointer is:%13d\n",*ptr);
    printf("Value of age through pointer to pointer is:%2d\n",**pptr);
    
    printf("Address in Hexadecimal:\n");
    printf("Address of age through age is:%38p\n",&age);
    printf("Address of age through pointer is:%34p\n",ptr);
    printf("Address of age through pointer to poinnter is:%22p\n",*pptr);
    printf("Address of pointer through pointer is:%30p\n",&ptr);
    printf("Address of pointer through pointer to pointer is:%19p\n",pptr);
    printf("Address of pointer to pointer through pointer to pointer is:%p\n",&pptr);
    
    printf("Address in Decimal:\n");
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",*pptr);
    printf("%u\n",&ptr);
    printf("%u\n",pptr);
    printf("%u\n",&pptr);
    return 0;
}