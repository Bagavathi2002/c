#include<stdio.h>
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements before reversing: ");
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Elements after reversing: ");
    printf("\n");
    int copy;
    for(int i=0;i<n/2;i++){
        copy=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=copy;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    
}