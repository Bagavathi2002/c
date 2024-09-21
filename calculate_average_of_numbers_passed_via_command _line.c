#include<stdio.h>
#include<stdlib.h>
int main(int args ,char *argv[]){
    float sum=0;
        int i=1;
    if(args >= 2){
    
        while(argv[i] != NULL){
            sum=sum+atof(argv[i]);
            i++;
        }
    }
    sum=sum/(i-1);
    printf("Average is %g",sum);
}