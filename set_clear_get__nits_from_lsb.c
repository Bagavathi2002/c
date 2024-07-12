#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number in hexadecimal : ");
    scanf("%x",&n);
    printf("Enter the number of bits in decimal:");
    scanf("%d",&m);
    int a=n | ((1 << m)-1);
    printf("After setting %d bits from LSB: %X\n",a);
    int b=n & ~((1 << m)-1);
    printf("After clearing %d bits from LSB: %X\n",b);
    int c=n & ((1 << m)-1);
    printf("After getting %d bits from LSB: %X\n",c);

}