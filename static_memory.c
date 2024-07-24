#include<stdio.h>
int fun(){
    static int ret =1;
    ret+=100;
    printf("%d\n",ret);
}
int main(){
    fun();
    fun();
    return 0;
}