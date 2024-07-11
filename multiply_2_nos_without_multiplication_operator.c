#include<stdio.h>
int main(){
    int a,b;

    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
     int c=a;
     if(b==0){
         printf("The Result is 0");
     }
     else{
    for(int i=1;i<b;i++){
        a+=c;
    }
    printf("The Result is %d",a);
     }
    return 0;
    
}