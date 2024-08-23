#include <stdio.h>
#include <math.h>
int is_prime(int limit){
    for(int i=2;i <= limit;i++){
        int count=0;
    for(int j=2;j <=sqrt(i);j++){
        if(i % j == 0){
            count++;
        }
    }
    if(count==0){
        printf("%d ",i);
    }}
}


int main()
{
    int limit;
    

    scanf("%d", &limit);
    
    if (limit > 1)
    {
        is_prime(limit);
    }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}