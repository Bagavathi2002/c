#include<stdio.h>
int main(){
    int k=1;
    int fact(int num){
        for(int i=2;i<=num;i++){
            k*=i;
        }
        return k;
    }
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of 5 is %d",fact(n));
    return 0;
    
}
