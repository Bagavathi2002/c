#include<stdio.h>
void copy(char arr[],char arrc[]){
    int i=0;
    while(arr[i]!='\0'){
        arrc[i]=arr[i];
        i++;
    }
   arrc[i]='\0';
}
int main(){
    char arr[1000];
    printf("Enter the string : ");
    fgets(arr,sizeof(arr),stdin);
    char arrc[1000];
    
    copy(arr,arrc);
    printf("Copied string is %s",arrc);
    return 0;
}