#include <stdio.h>
#include <math.h>

int main(void){
    int n=0,x=0;
    float sum=0.0;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Enter X: ");
    scanf("%d",&x);
    printf("1+x+x^2+x^3+...+n\n");
    for(int i=0;i<n;++i){
        sum += (float)pow(x,i);
    }
    printf("Result: %f\n",sum);
    return 0;
}