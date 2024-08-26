#include <stdio.h>
int circular_right(int num, int n){
    unsigned int r=(unsigned int)num;
    unsigned int mask=r << (32-n);
    r=r >> n;
    mask=r | mask;
    return mask;
    
}
int print_bits(int num){
    printf("Result in Binary:");
    for(int i=31;i>=0;i--){
        printf(" %d",(num >> i) & 1);
    }
    
}

int main()
{   
    int num, n, ret;
    printf("Enter the num:");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);
    ret = circular_right(num, n);
    print_bits(ret);
}