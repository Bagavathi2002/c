#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    int n=(a>b) ? ((a>c) ? a:c) :((b>c) ? b: c);
    printf("Largest is %d",n);
    return 0;
}