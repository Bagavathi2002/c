#include<stdio.h>
struct student {
    char name[100];
    float mark[3];
    float average;
};
void aver(struct student *s){
    s->average=0;
    for(int i=0;i <3;i++){
        s->average+=s->mark[i];
    }
    s->average=s->average/3;
}
int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i <n;i++){
        printf("Enter name of the student : ");
        scanf("%s",s[i].name);
        printf("Enter P,C and M marks : ");
        for(int j=0;j<3;j++){
            scanf("%f",&s[i].mark[j]);
        }
        aver(&s[i]);
    }
    float a=0;
    for(int i=0; i< n;i++){
        a += s[i].average;
    }
    a=a/n;
    for(int i=0;i <n;i++){
        printf("%s ",s[i].name);
        for(int j=0;j<3;j++){
            printf("%g ",s[i].mark[j]);
        }
        printf("\n");
    }
    for(int i=0;i <n;i++){
        printf("%.2f ",s[i].average);
    }
    printf("%.2f ",a);
    return 0;
    
}