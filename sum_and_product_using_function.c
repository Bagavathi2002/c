#include<stdio.h>
int modify(int *a, int *b){
    int c=*a + *b;
    return c;
}
int mod(int *a, int *b){
    int d=*a * *b;
    return d;
}
int main(){
    int a,b;
    printf("Enter the number1 : ");
    scanf("%d",&a);
    printf("Enter the number2 : ");
    scanf("%d",&b);
    int c=modify(&a,&b);
    int d=mod(&a,&b);
    printf("Sum is %d\n",c);
    printf("Product is %d\n",d);
    return 0;
    
}