#include<stdio.h>
int main(){
    int product(int num1,int num2){
        int k=0;
        for(int i=0;i < num2;i++){
            k+=num1;
        }
        return k;
    }
    int n1,n2;
    printf("Enter num1 and num2 : ");
    scanf("%d %d",&n1,&n2);
    int p=product(n1,n2);
    printf("%d",p);
    return 0;
}