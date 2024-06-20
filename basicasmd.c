#include<stdio.h>
void main(){
    int a;
    int b;
    printf("enter the num 1 : ");
    scanf("%d",&a);
    printf("enter the num 2 : ");
    scanf("%d",&b);
    int c=a+b;
    int d=a-b;
    int e=a*b;
    int f=a/b;
    int g=a%b;
    printf("add %d\nsub %d\nmul %d\ndiv %d\nrem %d\n",c,d,e,f,g);
}