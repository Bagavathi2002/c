#include<stdio.h>
int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    for(int j=0;j<num;j++){
        for(int i=0;i<num;i++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}