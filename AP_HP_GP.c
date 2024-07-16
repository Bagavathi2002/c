#include<stdio.h>
int main(){
    int a,r,n;
    printf("Enter the First Number 'A': ");
    scanf("%d",&a);
    printf("Enter the Common Difference / Ratio 'R':");
    scanf("%d",&r);
    printf("Enter the number of terms 'N':");
    scanf("%d",&n);
    int a1=a;
    int a2=a;
    printf("AP = ");
    for(int i=0;i<n;i++){
        printf("%d",a);
        a+=r;
        if(i < n-1){
            printf(",");
        }
    }
    printf("\nP = ");
    for(int i=0;i<n;i++){
        printf("%d",a1);
        a1*=r;
        if(i < n-1){
            printf(",");
        }
    }
    printf("\nHP = ");
    for(int i=0;i<n;i++){
        float h=(float)1 / ( a2 + i * r);
        printf("%f",h);
        
        if(i < n-1){
            printf(",");
        }
    }
    return 0;
}