#include <stdio.h>
#include <string.h>
#include <ctype.h>
int pangram(char str[]){
    int arr[26]={0};
    int len=strlen(str);
    int j;
    for(int i=0;i < len;i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            j=tolower(str[i])-'a';
        arr[j]=1;
    }
    }
    for(int i=0; i< 26;i++){
        if(arr[i]==0){
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    char str[10000];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    int result=pangram(str);
    if(result==0){
        printf("The Entered String is not a Pangram String");
    }
    else{
        printf("The Entered String is a Pangram String");
    }
}