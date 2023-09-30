#include<stdio.h>
void main(){
    float l,b,r,side,area,perimeter;
    printf("Enter the Length and Breadth of rectangle = ");
    scanf("%f%f",&l,&b);
    printf("Perimeter of rectangle = %.2f",2*(l+b));
    printf("\nArea of rectangle = %.2f",l*b);
    printf("\nEnter the side of the square = ");
    scanf("%f",&side);
    printf("Perimeter of square = %.2f",4*side);
    printf("\nArea of square = %.2f",side*side);
    printf("\nEnter the radius of circle = ");
    scanf("%f",&r);
    printf("Perimeter of circle = %.2f",2*3.14*r);
    printf("\nArea of circle = %.2f",3.14*r*r);
}