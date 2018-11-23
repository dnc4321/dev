#include <stdio.h>

int main(void){
    int n=0,sum=0;
    printf("Enter N: ");
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        sum+=i;
    }
    printf("Series 1+2+3+...+n\nResult: %d\n",sum);
    return 0;
}