#include <stdio.h>

void positive_fibonacci(int limit, int a, int b, int c){
    
    if(limit==0){
        printf("0");
    }
    
    else{
        static int k=1;
        if(k==1){
            printf("0, ");
            k++;
        }
        a=b;
        b=c;
        c=a+b;
        if(c <= limit){
            printf("%d, ",c);
            positive_fibonacci(limit, a, b, c);
        }
        
    }
    
}

int main()
{
    int limit;
    scanf("%d", &limit);
    if(limit >= 0){
        positive_fibonacci(limit, 0, 1, 0);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}