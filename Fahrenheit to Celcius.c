#include<stdio.h>
int main(){
    float num;
    printf("enter the number");
    scanf("%f",&num);
    float cel;
    cel=(num-32)*5/9;
    printf("%f",cel);
}