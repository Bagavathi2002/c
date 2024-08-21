#include<stdio.h>
int len(char arr[]){
    int i=0,c=0;
    while(arr[i]!= '\0'){
        c++;
        i++;
    }
    return c;
}
int main(){
    char arr[100];
    printf("Enter the string : ");
    scanf("%s",arr);
    int n=len(arr);printf("String length is %d",n);
}