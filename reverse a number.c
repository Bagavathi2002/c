#include<stdio.h>
void main(){
    int num,copy;
    int a,rev=0;
    printf("enter the num: ");
    scanf("%d",&num);
    copy=num;
    while(copy>0){
        a=copy%10;
        rev=(rev*10)+(a);
        copy/=10;
    }
    printf("%d",rev);
}