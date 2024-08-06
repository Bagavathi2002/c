#include <stdio.h>
int square(int arr[], int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i] * arr[i];
    }
}

int main()
{
    int n;
    printf("Ennter the size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     square(arr,n);
     printf("Square is ");
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}