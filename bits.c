#include<stdio.h>
int main(){
    int num=0;
    int mask=((num << 3) -1) << 3;
    int n = num | mask;
    for(int i=31;i >=0;i--){
        printf("%d",(n >> i) & 1);

    }
}