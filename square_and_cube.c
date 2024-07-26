#include<stdio.h>
int modify(int *n){
    printf("Square is %d\n",*n * *n);
    printf("Cube is %d",*n * *n *  *n);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    modify(&n);
    return 0;
}