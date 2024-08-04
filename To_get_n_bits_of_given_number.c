#include <stdio.h>

int get_nbits(int num, int n){
    
    int mask=(1 << n)-1;
    
    num=num & mask;
    return num;
}

int main()
{   
    
    int num, n, res = 0;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter number of bits: ");
    scanf("%d", &n);
   
    res = get_nbits(num, n);
    
    printf("Result = %d\n", res);
}