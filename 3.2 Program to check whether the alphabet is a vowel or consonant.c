#include<stdio.h>
void main(){
    char c;
    printf("enter the character = ");
    scanf("\n%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("%c is a vowel",c);}
    
else{
    printf("%c is a consonant ",c);}}
