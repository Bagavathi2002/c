#include<stdio.h>
unsigned char swap(unsigned char x){
    return(((x & 0x0F) << 4)  | ((x & 0xF0) >> 4));
}
int main(){
    int n;
    printf("Enter the hexadecimel value : ");
    scanf("%x",&n);
    printf("After swap : %X",swap((unsigned char)n));
    return 0;
}