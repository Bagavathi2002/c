#include<stdio.h>
int main(){
    int num;
    printf("enter the number: ");
    scanf("%x",&num);
    int n;
    printf("enter the  bit numer: ");
    scanf("%d",&n);
    printf("After setting bit: %X\n", num | (1 << n));
    printf("After clearing bit: %X\n", num & ~(1 << n));
    printf("After toggling bit: %X\n", num ^ (1 << n));
    return 0;

}