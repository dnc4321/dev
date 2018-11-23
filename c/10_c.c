#include <stdio.h>

int main(void){
    int n=0,sum=0;
    printf("Enter N: ");
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        sum += i*i;
    }
    printf("Series 1+4+9+16+...+n\nResult: %d\n",sum);
    return 0;
}