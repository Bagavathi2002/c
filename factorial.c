#include<stdio.h>
void main(){
    int i ,n,fac=1;
    printf("Enter the value : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         fac=fac*i;
    }
    printf("factorail of %d is %d ",n,fac);
}