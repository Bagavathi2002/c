#include<stdio.h>
int main(){
    unsigned int n;
    printf("Enter the number : ");
    scanf("%u",&n);
    for(int i=31;i>=0;i--){
        printf("%u",(n >> i)&1);

    }
    return 0;
}