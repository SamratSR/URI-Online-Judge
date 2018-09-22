#include<stdio.h>
int main(){
    int A,y,m,d;
    scanf("%d",&A);

    y=A/365;
    A=A%365;

    m=A/30;
    A=A%30;

    d=A%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

return 0;
}
