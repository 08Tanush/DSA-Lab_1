#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char Name[100];
    float p;
}s[5],t[5]
void main(){
    int i,j,t=0;
    printf("\n ENTER STUDENT INFO:\n");
    for (i=0;i<5;i++)
    {
        printf("student no.c%d\n",i+1);
        printf("enter roll no.");
        scanf("%d",&s[i].roll no);
        printf("enter name:");
        scanf("%s",&s[i].name);
        printf("enter percentage:");
        scanf("%f",&s[i].p);
    }
    for(i=0;i<5:i++){
        for(j=0;j<i+1;j++){
            if(s[i].rollno<s[j].rollno){
                t=s[i].rollno;
                s[j].rollno=t;
            }
        }
    }
    printf("Student list:\n");
    for(i=0;i<5;i++){

    }
        printf("\nRoll no.:%d",s[i].rollno);
        printf("\nPercentage:%f",s[i].p);
    }

