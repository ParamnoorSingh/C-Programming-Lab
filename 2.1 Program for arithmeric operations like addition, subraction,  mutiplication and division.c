#include<stdio.h>
void main(){
    int a,b,sum,sub,mul,div;
    printf("enter two numbers = ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("\nThe sum of the two numbers = %d",sum);
    printf("\nThe subtraction of the two numbers = %d",sub);
    printf("\nThe multiplication of the two numbers = %d",mul);
    printf("\nThe division of the two numbers = %d",div);
}