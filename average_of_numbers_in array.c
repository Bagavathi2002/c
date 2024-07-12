#include<stdio.h>
int main(){
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    int arr[n],k=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        k=k+arr[i];
    }
    float r=(float)k/n;
    if((int)r==r){
    printf("Average is : %.0f",r);
    }
    else{
        printf("Average is : %.1f",r);
    }
}