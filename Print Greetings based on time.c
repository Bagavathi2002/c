#include<stdio.h>
int main(){
    int num;
    printf("Enter the hour (0-23): ");
    scanf("%d",&num);
    if(num>=5 && num<=11){
        printf("Good morning!");
    }
    else if(num>=12 && num<=15){
        printf("Good afternoon!");
    }
    else if(num>=16 && num<=21){
        printf("Good evening!");
    }
    else if(num==22 || num==23 || (num>=1 && num<=4)){
        printf("Good night!");
    }
    else{
        printf("Invalid hour!");
    }
    return 0;
    }