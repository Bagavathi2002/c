#include<stdio.h>
float ave(int n,int array[]){
    float s=0;
    for(int i=0;i< n;i++){
        s=s+array[i];
    }
    s=s/n;
    return s;
    
}
int main(){
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0;i< size;i++){
        scanf("%d",&arr[i]);
    }
    float average=ave(size,arr);
    printf("Average is %g",average);
    return 0;
}