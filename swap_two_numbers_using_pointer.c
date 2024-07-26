#include<stdio.h>
int modify(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int a,b;
    printf("Enter the number1 : ");
    scanf("%d",&a);
    printf("Enter the number2 : ");
    scanf("%d",&b);
    
    printf("Before swap : \n");
    printf("num1 is %d\n",a);
    printf("num2 is %d\n",b);
    
    modify(&a,&b);
    printf("After swap : \n");
    printf("num1 is %d\n",a);
    printf("num2 is %d\n",b);
    
}