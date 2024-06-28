#include<stdio.h>
int main(){
    int num;
    int x=1;
    printf("Enter max lines: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",x);
            x+=1;
            
        }
        printf("\n");
    }
}