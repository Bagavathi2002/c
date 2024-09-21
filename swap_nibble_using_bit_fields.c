#include<stdio.h>
typedef struct{
    unsigned lowernipple : 4;
    unsigned uppernipple : 4;
    }nippleswap;
    int main(){
        nippleswap swap;
        unsigned char n;
        printf("Enter the hexadecimel value : ");
        scanf("%hhX",&n);
        swap.lowernipple=(n & (0x0F));
        swap.uppernipple=(n >> 4) & (0x0F);
        unsigned char x= (swap.lowernipple << 4) | (swap.uppernipple );
        printf("After swap nibble : %X",x);
    }