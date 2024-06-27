#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>=50 && a<=100){
        printf("%d is in range",a);
    }
    else{
        printf("%d is not in range",a);
    }
}