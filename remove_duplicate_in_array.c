#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size){
    for(int i=0;i< size;i++){
        int dup=0;
        for(int j=i+1;j <size;j++){
            if(arr1[i]==arr1[j]){
                dup=1;
                break;
            }
        }
    if(dup==0){
        arr2[*new_size]=arr1[i];
        (*new_size)++;
        
    }}
}

int main()
{
    int size;
    scanf("%d",&size);
    int arr1[size];
    int arr2[size];
    for(int i=0;i< size;i++){
        scanf("%d",&arr1[i]);
    }
    int new_size=0;
    fun(arr1,size,arr2,&new_size);
    printf("After removing duplicates: ");
    for(int i=0;i< new_size;i++){
        printf("%d ",arr2[i]);
    }
}