#include <stdio.h>

int replace_nbits(int num, int n, int val){
   
    int mask= ((1 << n)-1);
   
    num =num & ~mask;
    
    val =val & mask;
    
    int res= num | val;
    return res;
}

int main()
{   
    
    int num, n, val, res;
    
    printf("Enter num, n and val:");
    scanf("%d", &num);
    
    printf("Enter num, n and val:");
    scanf("%d",&n);
    
    printf("Enter num, n and val:");
    scanf("%d",&val);
    
    res = replace_nbits(num, n, val);
   
    printf("Result = %d\n", res);
}