#include<stdio.h>

typedef struct complex
{
    int x,y;
}comp;

void cal(comp* c1,comp* c2, comp* sum){
    sum->x=c1->x+c2->x;
    sum->y=c1->y+c2->y;
}

int main(){
  comp c1;
  comp c2;
  comp sum;
  char m;
  //comp *ptr=c1;
  printf("Enter value for c1:\n");
  scanf("%d%s%d%s",&c1.x,&m,&c1.y,&m);
  printf("Enter value for c2:\n");
  scanf("%d%s%d%s",&c2.x,&m,&c2.y,&m);
  cal(&c1,&c2,&sum);
  printf("addition of given two complex no. is:\n");
  printf("%d + %d i\n",sum.x,sum.y);
  //printf("y is:%d\n",sum.y);  
return 0;
}