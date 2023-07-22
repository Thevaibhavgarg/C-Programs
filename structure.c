#include<stdio.h>
#include<string.h>
#define N 3

typedef struct address
{
    int houseNo,block;
    char city[100],state[100];
}add;

void printstruct(add a2){
    printf("House No. :%d\n",a2.houseNo);
    printf("Block No. :%d\n",a2.block);
    printf("City Name :%s\n",a2.city);
    printf("State Name :%s\n",a2.state);
}
int main(){
    add a1[N];
    add *ptr=a1;
    printf("Enter info for person %d\n",1);
    scanf("%d %d %s %s",&a1[0].houseNo,&a1[0].block,a1[0].city,a1[0].state);
    
    printf("House No. :%d\n",(*ptr).houseNo);       //through pointer dot operator
    printf("Block No. :%d\n",(*ptr).block);
    printf("City Name :%s\n",ptr->city);            //through pointer arrow operator
    printf("State Name :%s\n",ptr->state);
    
    for (int i = 1; i < N ; i++)
    {
        printf("Enter info for person %d\n",i+1);
        scanf("%d %d %s %s",&a1[i].houseNo,&a1[i].block,a1[i].city,a1[i].state);
        printstruct(a1[i]);
    }
    

    
return 0;
}