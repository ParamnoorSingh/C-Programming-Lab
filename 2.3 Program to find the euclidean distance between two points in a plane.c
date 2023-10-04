#include<stdio.h>
#include<math.h>
void main(){
    float x1,y1,x2,y2,distance;
    printf("enter the point 1 and point 2 =\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("distance = %.2f",distance);  
}
