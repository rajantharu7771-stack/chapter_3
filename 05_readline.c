#include<stdio.h>
#include<string.h>
int main(){
    char text[100];
    int txtno, spcno;
    printf(" Entre a line of text : ");
    fgets(text,sizeof(text),stdin);
text[strcspn(text,"\n")]= '\0';
 printf(" the formatt")
    return 0;
}