#include<stdio.h>
void main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num==0){
        printf("zero");
    }
    else if(num>=1){
        printf("natural number");
    }
    else{
        printf("negative number");
    }
}