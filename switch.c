#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    switch(ch){
        case 'A'...'Z':
        printf("Character is Uppercase");
        break;
        case 'a'...'z':
        printf("Character is Lowercase");
        break;
        case '0'...'9':
        printf("Character is a digit");
        break;
        default:
        printf("Not an alphabet or digit");
        
    }
}