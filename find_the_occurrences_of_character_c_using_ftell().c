#include<stdio.h>
int main(){
    FILE *fp;
    int count=0,position;
    char ch;
    fp=fopen("text.txt","r");
    if(fp==NULL){
        return 1;
    }
    while((ch=getc(fp)) != EOF){
        if(ch =='c'){
            count++;
            position=ftell(fp);
            printf("%d\n",position);
        }
    }
    printf("Total occuranvce %d",count);
    return 0;
}