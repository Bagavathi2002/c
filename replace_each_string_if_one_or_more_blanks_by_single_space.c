#include <stdio.h>
void replace_blank(char str[]){
    int i=0,j=0,count=0;
        while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];
            count = 0;  
        } else if (count == 0) {  
            str[j++] = ' ';
            count++;  
        }
        i++;
    }
    
    str[j]='\0';
}

int main()
{   
    char str[10000];
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]s",str);
    replace_blank(str);
    printf("%s\n", str);
}