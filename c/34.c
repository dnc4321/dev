#include<stdio.h>

int fact(int n){
    int sum=1;
    for(int i=1;i<=n;++i){
        sum=sum*i;
    }
    return sum;
}
int rec(int n){
    if(n != 1)
        return fact(n) + rec(n-1);
    else
        return n;
}
int main(void){
    printf("Enter N: ");
    int n;
    scanf("%d",&n);
    int sum=rec(n);
    printf("Sum: %d\n",sum);
}