#include <stdio.h>
int getword(char str[]){
    int i=0,len=0;
    while(str[i] != '\0' && str[i] != ' ' && str[i] != '\n'){
        i++;
        len++;
    }
    str[i]='\0';
    return len;
}

int main()
{       
    
        int len;
	    char str[100];
		printf("Enter the string : ");
		fgets(str, sizeof(str), stdin);
		len = getword(str);
        printf("You entered %s and the length is %d\n", str, len);
}