#include<stdio.h>
void main(){
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);
    if(ch >=65 && ch<=90){
        printf("upper case ");
    }
    else if(ch >=97 && ch<=122){
        printf("lower case ");
    }
    else{
        printf("invalid character");
    }
    }