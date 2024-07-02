#include<stdio.h>
int main(){
    int a[5];
    printf("Enter the 5 numbers: ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("The numbers are ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
