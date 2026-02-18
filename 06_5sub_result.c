#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    int t;
    float a;
    printf("entre the marks obtained in in 5 subjects one by one : ");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    t=sub1+sub2+sub3+sub4+sub5;
    a=t/5;
    printf("\nThe total marks is : %d \n the avergae marks is : %.2f ",t,a);
 

    return 0;

}