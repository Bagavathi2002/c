#include<stdio.h>
int main(){
    int x=10;
    int y=15;
    int *p=&x;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%p\n",&p);
    printf("-------------\n");

    *p=20;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%p\n",&p);
        printf("-------------\n");
    p=&y;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%p\n",&p);

    return 0;
}