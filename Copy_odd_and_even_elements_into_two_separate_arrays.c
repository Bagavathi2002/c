#include<stdio.h>
int main(){
    int n,a=0,b=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if((arr[i]%2)==0){
            a+=1;
        }
        else{
            b+=1;
        }
    }
    
    int even[a];
    int odd[b];
    a=0;
    b=0;
    for(int i=0;i<n;i++){
        if((arr[i]%2)==0){
            even[a++]=arr[i];
        }
        else{
            odd[b++]=arr[i];
        }
    }
    printf("Odd array elements: ");
    for(int i=0;i<b;i++){
        printf("%d ",odd[i]);
    }
    printf("\nEven array elements: ");
     for(int i=0;i<a;i++){
        printf("%d ",even[i]);
    }
        
    
    return 0;
}