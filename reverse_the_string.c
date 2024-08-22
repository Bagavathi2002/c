#include<stdio.h>
int main(){

char str[100];
    printf("Enter the string : ");
    scanf("%s",str);
 char rev[100];
    int i=0,count=0;
    while(str[i] !='\0'){
        i++;
        count++;
    }
    for(int i=0;i<count;i++){
        rev[i]=str[count-i-1];
    }
    rev[count]='\n';
    printf("Reversed string is %s",rev);
    return 0;
}