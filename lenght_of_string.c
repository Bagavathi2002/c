#include<stdio.h>
int main(){
    char str[50];
    printf("enter the string");
    scanf("%s",str);
    int i=0;
    int count=0;

    while(str[i] != '\0' ){
        i++;
        count++;
    }
    printf("%d",count);
}