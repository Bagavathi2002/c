#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the row size : ");
    scanf("%d",&m);
    printf("Enter the column size : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the array elements : ");
    for(int i=0; i< m;i++){
        for(int j=0; j <n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0; i< m;i++){
        for(int j=0; j <n;j++){
            if(arr[i][j] > max){
                max=arr[i][j];
            }
            if(arr[i][j] < min){
                min=arr[i][j];
            }
        }
    }
    printf("Min is %d\n",min);
    printf("Max is %d",max);
    
    
    
}