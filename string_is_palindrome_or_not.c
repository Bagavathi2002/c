#include<stdio.h>
int string(char str[],int len){
    for(int i=0;i < len;i++){
        if(str[i] != str[len-i-1]){
            return 1;
            break;
        }
    }
    return 0;
}
int main(){
    char str[100];

    printf("Enter the string : ");
    scanf("%s",str);
    int i=0,len=0;
    while(str[i] != '\0'){
        len++;
        i++;
    }
    int n=string(str,len);
    if(n==0){
        printf("Yes,Entered string is palindrome.");
    }
    else{
        printf("No,Entered string is not palindrome.");
    }
    
}