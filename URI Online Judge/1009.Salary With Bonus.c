#include<stdio.h>
int main(){

    char name[30];
    float a;
    double b,sum;
    //gets(name);
    scanf("%s",&name);
    scanf("%f %lf",&a,&b);
    sum=a+(b*15)/100;
    printf("TOTAL = R$ %.2lf\n",sum);

return 0;
}
