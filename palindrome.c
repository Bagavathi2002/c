#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int a,b=0,c=n;
    while(n>0){
        a=n%10;
        b=(10*b)+a;
        n=n/10;
    }
    if(c==b){
    printf("The Entered number is an palindrome.");
    }
    else{
        printf("The Entered number is not an palindrome.");
    }
    return 0;
}