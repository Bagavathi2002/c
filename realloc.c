#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *name;
    name=malloc(1);
    realloc(name,10);
    strcpy(name,"hello");
    printf("%s",name);
}