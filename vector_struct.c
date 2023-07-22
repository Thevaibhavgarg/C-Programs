#include<stdio.h>

typedef struct vector
{
    int x,y;
}vec;

void cal(vec* v1,vec* v2, vec* sum){
    sum->x=v1->x+v2->x;
    sum->y=v1->y+v2->y;
}

int main(){
  vec v1;
  vec v2;
  vec sum;
  //vec *ptr=v1;
  printf("Enter value for v1:\n");
  scanf("%d %d",&v1.x,&v1.y);
  printf("Enter value for v2:\n");
  scanf("%d %d",&v2.x,&v2.y);
  cal(&v1,&v2,&sum);
  printf("addition of given two vector is:\n");
  printf("x is:%d\n",sum.x);
  printf("y is:%d\n",sum.y);  
return 0;
}