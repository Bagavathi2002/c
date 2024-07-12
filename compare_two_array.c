#include<stdio.h>
int main(){
    int m,n;
    int a=0,b=0;
    printf("Enter the array1 size : ");
    scanf("%d",&m);
    printf("Enter the array2 size : ");
    scanf("%d",&n);
    int arr1[m],arr2[n];
    printf("Enter the array1 elements : ");
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
        a=a+arr1[i];
    }
    printf("Enter the array2 elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
        b=b+arr2[i];
    }
    if(a==b){
        printf("Array elements are equal.");
    }
    else{
        printf("Array elements are not equal.");
    }
    return 0;
}