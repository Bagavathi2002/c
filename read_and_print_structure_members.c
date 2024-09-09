#include<stdio.h>
struct str{
    char a;
    int b;
    float c;
    char d[100];
};
int main(){
    struct str s1;
    scanf("%c %d %f %s",&s1.a, &s1.b, &s1.c, s1.d );
    printf("%c %d %.1f %s",s1.a, s1.b, s1.c, s1.d );
}