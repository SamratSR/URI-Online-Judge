#include<stdio.h>
int main(){

    double a,b,c,pi=3.14159,triangle,circle,trapezium,square,rectangle;
    scanf("%lf %lf %lf",&a,&b,&c);

    triangle=(a*c)/2;
    circle=pi*c*c;
    trapezium=c*(a+b)/2;
    square=b*b;
    rectangle=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle,circle,trapezium,square,rectangle);


return 0;
}
