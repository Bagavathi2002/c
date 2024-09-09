#include<stdio.h>
#define GETBITS(a,b)   (a >> b) & 1
#define SETBITS(a,b)   (1 << b) | a
#define CLEARBITS(a,b)   (~(1 << b) & a)
int main(){
    int num=10;
    int pos=3;
    printf("%d\n",GETBITS(num,pos));
     printf("%d\n",SETBITS(num,pos));
      printf("%d",CLEARBITS(num,pos));
}