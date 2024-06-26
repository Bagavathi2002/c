#include<stdio.h>
int main (){
    float a;
    int b,c;
    printf("enter the principal amount");
    scanf("%f",&a);
    printf("enter the rate of interest");
    scanf("%d",&b);
    printf("enter the time period in year");
    scanf("%d",&c);
    float in;
    in=(a*b*c)/100;
    if(in==(int)in){
        printf("%d",(int)in);
    }
    else{
        printf("%f",in);
    }
    return 0;
}