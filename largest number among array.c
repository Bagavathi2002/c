#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    int a;
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    a=arr[0];
    for(int i=0;i<n;i++){
        if(a<arr[i]){
            a=arr[i];
        }
        
    }
    printf("Largest element of an array: %d",a);
}