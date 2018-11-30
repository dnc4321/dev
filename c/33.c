#include <stdio.h>

int fact(int n){
    int sum=1;
    for(int i=1;i<=n;++i)
        sum=sum*i;
    return sum;
}
int main(void){
    printf("Enter values of N & R\n");
    int n,r,ncr;
    scanf("%d%d",&n,&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("nCr = %d\n",ncr);
}