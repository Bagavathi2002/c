#include<stdio.h>
int main(){
    int a;
    printf("Age= ");
    scanf("%d",&a);
    if(a<5){
        printf("Children under 5 years old get in free! Ticket price: Rs.0.00");
    }
    else if(a>=5 && a<=12){
        printf("Ticket price : RS. 50.00");;
    }
    else if(a>65){
        printf("Ticket price: Rs.80.00");
    }
    else{
        printf("Ticket price: Rs.100.00");
    }
}