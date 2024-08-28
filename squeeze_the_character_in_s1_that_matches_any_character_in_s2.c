#include <stdio.h>

void squeeze(char str1[], char str2[]){
    int l1=0,l2=0;
    while(str1[l1] != '\0'){
        l1++;
    }
    while(str2[l2] != '\0'){
        l2++;
    }
    int k=0;
    for(int i=0;i < l1 ;i++){
        int count=0;
        for(int j=0 ;j < l2;j++){
            if(str1[i] == str2[j]){
                count=1;
                break;
            }
        }
        if(count!=1){
            str1[k]=str1[i];
            k++;
        }
    }
    str1[k]='\0';
}

int main()
{
    char str1[30];
    
    printf("Enter string1:");
    scanf("%[^\n]", str1);
    
    char str2[30];
    printf("Enter string2:");
    scanf(" %[^\n]", str2);
    
    squeeze(str1, str2);
    
    printf("After squeeze s1 : %s\n", str1);
    
}