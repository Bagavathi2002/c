#include<stdio.h>
int main(){
    char ch;
    FILE *source,*dest;
    source=fopen("text.txt","r");
    if(source == NULL){
        printf("ERROR");
        return 1;
    }
    dest=fopen("text_copy.txt","r");
    if(dest == NULL){
        printf("ERROR");
        return 1;
    }
    while((ch=getc(source)) != EOF){
        fputc(ch,dest);
    }
    fclose(source);
    fclose(dest);
}