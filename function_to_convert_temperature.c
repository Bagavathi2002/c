#include<stdio.h>
float fahren(float f){
    float c=(5.0/9.0)*(f-32);
    return c;
}
int main(){
    float n;
    printf("Enter the Fahrenheit : ");
    scanf("%f",&n);
    float f=fahren(n);
    printf("Degree Celsius %f",f);
    return 0;
}