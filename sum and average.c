#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: ");
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    float av=(float)sum/n;
    printf("Sum: %d\n",sum);
    printf("Average: %f",av);
    return 0;
    
}