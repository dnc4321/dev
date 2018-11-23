#include <stdio.h>

int main(void){
    int n=0;
    float sum=0.0;
    printf("Enter N: ");
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        sum += (float)1/i;
    }
    printf("Series 1+1/2+1/3+...+n\nResult: %f\n",sum);
    return 0;
}