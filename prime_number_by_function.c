#include<stdio.h>
    int main(){
    int prime(int num){
        if (num <= 1) {
            return 1;
        }
        if (num == 2){
        return 0;
    }
        for(int i=2;i<=num/2;i++){
             if(num %i ==0){
                 return 1;
             }
        }
        return 0;
    }
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int flag=prime(n);
    if(flag==0){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
    return 0;
}