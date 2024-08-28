#include <stdio.h>

void reverse_iterative(char str[]){
    int i=0,count=0;
    char temp;
    while(str[i]!='\0'){
        i++;
        count++;
    }
    for(int i=0; i < count/2;i++){
        temp=str[i];
        str[i]=str[count-i-1];
        str[count-i-1]=temp;
        
    }
    
}

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);
    
    printf("Reversed string is %s\n", str);
}