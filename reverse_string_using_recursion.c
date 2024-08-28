#include <stdio.h>

void reverse_recursive(char str[], int i, int len){
    if(i >=len){
        return ;
    }
    else{
        char temp=str[i];
        str[i]=str[len];
        str[len]=temp;
        
        reverse_recursive(str, i+1, len-1);
    }
}

int main()
{
    char str[30];
    
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    int len=0;
    while(str[len]!= '\0'){
        len++;
    }
    
    reverse_recursive(str, 0, len-1);
    
    printf("Reversed string is %s\n", str);
}