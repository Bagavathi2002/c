#include<stdio.h>
int square(int num){
    num =num*num;
    return num;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int s=square(n);
    printf("Square is %d",s);
    return 0;
}