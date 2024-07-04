#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    unsigned int a=(n<0) ? -n : n;
    printf("Absolute value is %u",a);
    return 0;
    
}