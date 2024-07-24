#include <stdio.h>

int is_xdigit(int ch){

    if ((ch >= '0' && ch <= '9') || 
        (ch >= 'a' && ch <= 'f') || 
        (ch >= 'A' && ch <= 'F')){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{   
    
    char ch;
    short ret;
  
    printf("Enter a character: ");
    scanf("%c", &ch);
   
    ret = is_xdigit(ch);
   
    if(ret){
        printf("Entered character is  an hexadecimal digit");
    }
    else{
        printf("Entered character is not an hexadecimal digit");
        
    }
    return 0;
}