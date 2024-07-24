#include <stdio.h>
int my_ispunct(int ch){
    if ((ch >= '!' && ch <= '/') || (ch >= ':' && ch <= '@') ||
        (ch >= '[' && ch <= '`') || (ch >= '{' && ch <= '~')){
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

    ret = my_ispunct(ch);
   
    if(ret){
        printf("Entered character is punctuation character");
    }
    else{
        printf("Entered character is not punctuation character");
        
    }
    return 0;
}