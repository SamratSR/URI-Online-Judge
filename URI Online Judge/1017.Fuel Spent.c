#include<stdio.h>
int main(){

    float time,speed,liters;
    scanf("%f\n%f",&time,&speed);
    liters=(time*speed)/12;
    printf("%.3f\n",liters);

return 0;
}
