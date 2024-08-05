#include <stdio.h>

int get_nbits_from_pos(int num, int n, int pos){
    int mask=(((1 << n)-1) << (pos-n+1));
     num= (num & mask) >> (pos -n +1);
    return num;
}

int main()
{
    int num, n, pos, res;
    
    printf("Enter num");
    scanf("%d", &num);
    
    printf("Enter n");
    scanf("%d",&n);
    
    printf("Enter val:");
    scanf("%d",&pos);
    
    res = get_nbits_from_pos(num, n, pos);
    
    printf("Result = %d\n", res);
}