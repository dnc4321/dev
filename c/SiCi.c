#include<stdio.h>

float pow(float,float);
int main()
{
    double p,r,t;
    double ci,si;
    printf("ENTER PRINCIPAL RATE AND TIME\n");
    scanf("%lf",&p);
    scanf("%lf",&r);
    scanf("%lf",&t);
    si=(p*r*t)/100;
    ci=p*pow((1+r/100),t)-p;
    printf("SIMPLE INTEREST:\t%lf",si);
    printf("\nCOMPOUND INTEREST:\t%lf\n",ci);
    return 0;
}
float pow(float f,float n){
    int i = 0;
    double pro=1.0;
    for(i=0;i<n;i++){
        pro=pro*f;
    }
    return pro;
}