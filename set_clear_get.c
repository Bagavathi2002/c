#include<stdio.h>
int main(){
    unsigned int num;
    printf("enter the number: ");
    scanf("%x",&num);
    int n;
    printf("enter the  bit numer: ");
    scanf("%d",&n);
    printf("Result after setting bit is : %X\n", num | (1 << n));
    printf("Result after clearing bit is : %X\n", num & ~(1 << n));
    if((num & (1 << n)) ==1){
    printf("Get bit at nth position is: 1");
    }
    else{
       printf("Get bit at nth position is: 0"); 
    }
    return 0;

}