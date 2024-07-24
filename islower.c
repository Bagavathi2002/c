#include <stdio.h>

int my_islower(int ch){
    
    if(ch >= 'a' && ch <= 'z') {
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

    ret = my_islower(ch);
    
    if(ret){
        printf("Entered character is lower case alphabet");
    }
    else{
        printf("Entered character is not lower case alphabet");
        
    }
    return 0;
}