#include <stdio.h>

int my_isalnum(int ch){
    
    if((ch >='A' && ch <='Z') || (ch >= 'a' && ch <= 'z') || (ch >='0' && ch <= '9')){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char ch;
    int ret;
 
    printf("Enter the character:");
    scanf("%c", &ch);

    ret = my_isalnum(ch);
    
    if(ret){
        printf("Entered character is alphanumeric character");
    }
    else{
        printf("Entered character is not alphanumeric character");
        
    }
    return 0;
}