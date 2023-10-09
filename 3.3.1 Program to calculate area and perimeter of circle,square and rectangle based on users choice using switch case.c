#include<stdio.h>
void main(){
    int n,l,b,s;
    float r;
    printf("Program for area and perimeter of differnt figures\n");
    printf("Enter 1 for rectangle,2 for square,3 for circle: ");
    scanf("%d",&n);
    switch(n){
        case 1: 
        
        printf("Enter length of rectangle: ");
        scanf("%d",&l);
        printf("enter breadth of rectangle: "); 
        scanf("%d",&b);
        printf("Area and perimeter of rectangle is respectively: %d,%d",l*b,2*(l+b));
        break;
        case 2:
         
        printf("Enter side of square: ");
        scanf("%d",&s);
        printf("Area and perimeter of square is respectively: %d,%d",s*s,4*s);
        break;
        case 3:
        
        printf("Enter radius of circle: ");
        scanf("%f",&r);
        printf("Area and perimeter of circle is respectively: %.2f,%.2f",3.14*r*r,2*3.14*r);
        break;
    }
}