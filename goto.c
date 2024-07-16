#include<stdio.h>
int main(){
    int num=0;
    printf("First line");
    goto label;
    printf("Second line");
    label:
    if(num<5){
        printf("%d\n",num++);
        goto label;
    }
    return 0;

}