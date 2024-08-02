#include<stdio.h>
int mod(int n){
    while(n !=0){
        
        return n + mod(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int s=mod(n);
    printf("Sum of 1st 10 numbers is %d",s);
}