#include <stdio.h>

int func(int n){
    int sum = 1;
    for (int i=1;i<=n;++i){
        sum *= i;
    }
    return sum;
}

int main(void){
    int n=0,sum=0;
    printf("Enter N: ");
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        sum += func(i);
    }
    printf("Series: 1!+2!+3!+...+n\n");
    printf("Result: %d\n",sum);
}