#include<stdio.h>
int main(){
    int f;
    float c;
    printf("enter the fahrenheit");
    scanf("%d",&f);
    c=(f-32)*(5.0/9.0);
    printf("%f",c);
}