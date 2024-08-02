#include<stdio.h>
int power(int m,int n){
    if(n==0){
       return 1;
    }
    else{
        return m * power(m,n-1); 
       
    }
}
int main(){
    int a,b;
    printf("Enter n and m : ");
    scanf("%d %d",&a,&b);
    int c=power(a,b);
    printf("%d to the power of %d is %d",a,b,c);
    return 0;
}