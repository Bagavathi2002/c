#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The numbers are ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
