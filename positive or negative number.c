#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>=1){
        printf("%d is positive",a);
    }
    else{
        printf("%d is negative",a);
    }
    return 0;
}