#include <stdio.h>

int my_atoi(const char *s){
    int res=0;
    int sign=1;
    if(*s== '-' || *s== '+' || (*s >= '1' && *s <= '9') ){
        if(*s== '-'){
        sign=-1;
        }
    }
    else{
        return 0;
    }
    if(*(s+1) >= '1' && *(s+1) <= '9' ){
        
    }
    else{
        sign=0;
    }
    
    
    while(*s){
        if(*s >= '1' && *s <= '9'){
            res=(res*10)+(*s-'0');
        }
        s++;
    }
    return (sign * res);
}

int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));
}