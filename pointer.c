#include<stdio.h>
int main(){
    int age =22;
    int *ptr=&age;
    int _age =*ptr;
    printf("Values:\n");
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    printf("%d\n",_age);
    printf("Address in Hexadecimal:\n");
    printf("%p\n",&age);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    printf("Address in Decimal:\n");
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);
    return 0;
}