#include<stdio.h>
int main(){
    char ch;
    printf("Enter direction: ");
    scanf(" %c",&ch);
    if(ch>='a'&& ch<='z'){
        ch=ch-32;
    }
    switch(ch){
        case 'N':
        printf("North");
        break;
        case 'S':
        printf("South");
        break;
        case 'W':
        printf("West");
        break;
        case 'E':
        printf("East");
        break;
        default:
        printf("Invalid input");
    }
}