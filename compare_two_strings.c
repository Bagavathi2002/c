#include<stdio.h>
void fun(char ar1[],char ar2[],int *n){
    int i=0;
    while(ar1[i] !='\0'){
        if(ar1[i] !=ar2[i]){
            *n=1;
            break;
    }
    i++;
}
}
int main(){
    char ar1[100];
    char ar2[100];
    int n=0;
    printf("Enter the string1 : ");
    scanf("%[^\n]s",ar1);
    printf("Enter the string2 : ");
    scanf("%s[^\n]",ar2);
    fun(ar1,ar2,&n);
    if(n==1){
        printf("Entered Strings are not equal");
    }
    else{
         printf("Entered Strings are equal");
    }
    return 0;
}