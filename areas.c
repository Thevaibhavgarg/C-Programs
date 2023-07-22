#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length,float bredth);
int main(){
    float side;
    printf("Enter side of a square:");
    scanf("%f",&side);
    float a=squareArea(side);
    printf("Area of Square of side %f is: %f \n",side,a);
    
    float radius;
    printf("Enter radius of a circle:");
    scanf("%f",&radius);
    float b=circleArea(radius);
    printf("Area of Circle of radius %f is: %f \n",radius,b);
    
    float length,bredth;
    printf("Enter length and bredth of a rectangle:");
    scanf("%f %f",&length,&bredth);
    float c=rectangleArea(length,bredth);
    printf("Area of Rectangle of length %f and Bredth %f is: %f \n",length,bredth,c);
    return 0;
}
float squareArea(float side){
    return side*side;
}
float circleArea(float radius){
    return 3.14*radius*radius;
}
float rectangleArea(float length,float bredth){
    return length*bredth;
}