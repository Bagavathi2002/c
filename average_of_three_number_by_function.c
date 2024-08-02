#include<stdio.h>
int main(){
    float average(int m,int n,int o){
        float aver=(float)(m+n+o)/3;
        if(aver == (int)aver){
              printf("Average is %d",(int)aver);
        }
        else{
            printf("Average is %.4f",aver);
        }
    }
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    average(a,b,c);
    
    return 0;
}