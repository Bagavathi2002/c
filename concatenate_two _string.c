#include<stdio.h>
void concat(char str1[],char str2[],int l1,int l2){
    int k=l1+l2;
    str1[k];
    for(int i=l1; i < k ;i++){
        str1[i]=str2[i-l1];
    }
    printf("concatenate string is %s",str1);
}
int main(){
    char str1[100];
    char str2[100];
    printf("Enter the string1 : ");
    scanf("%s",str1);
    printf("Enter the string2 : ");
    scanf("%s",str2);
    int i=0,j=0;
    while(str1[i]!= '\0'){
        i++;
    }
     while(str2[j]!= '\0'){
        j++;
    }
    concat(str1,str2,i,j);
    return 0;
    
}