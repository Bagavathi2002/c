#include<stdio.h> 
# define ADD(a,b)  a+b
int main(){
    int n1,n2;
    printf("Enter the num1 : ");
    scanf("%d",&n1);
    printf("Enter the num2 : ");
    scanf("%d",&n2);
    printf("The sum is %d",ADD(n1,n2));
}