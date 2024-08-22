#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *name;
    name=malloc(100);
    strcpy(name,"hello");
    printf("%s",name);
}