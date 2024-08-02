#include<stdio.h>
int factorial(int n){
    if(n ==1){
        return n;
    }
    else{
        return n * factorial(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("Factorial of 5 is %d",fact);
    return 0 ;
}