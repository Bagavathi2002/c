#include<stdio.h>
int main(){
    int n,a=0,b=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if((arr[i]%2)==0){
            a+=1;
        }
        else{
            b+=1;
        }
    }
    
    printf("Even count: %d\n",a);
    printf("Odd count: %d",b);
    return 0;
}