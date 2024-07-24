#include<stdio.h>
int main(){
    // Declare the variables
    int num,n,m;
    // Get input from user
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter 'N': ");
    scanf("%d",&n);
    printf("Enter 'M': ");
    scanf("%d",&m);
    
    // Check if the Nth bit is set
    if(num & 1 << n){
        // Clear the Mth bit if the Nth bit is set
        num = num & ~(1 << m);
}
// print the num value
printf("Updated value of num is %d",num);
return 0;
}