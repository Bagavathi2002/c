#include<stdio.h>
#define SWAP(n) (((n & 0x0F) << 4 ) | ((n & 0xF0) >> 4 ))
int main(){
    unsigned char n;
    printf("Enter the hexadecimal value : ");
    scanf("%hhx",&n);
    n=SWAP(n);
    printf("After swap nibble : %X",n);
}