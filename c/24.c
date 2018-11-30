#include <stdio.h>

int fact(int n){
    int sum=1;
    for(int i=1;i<=n;++i)
        sum=sum*i;
    return sum;
}

int kim(int n){
    int sum=0,n2=n;
    while(n!=0){
        sum=sum+fact(n%10);
        n=n/10;
    }
    return sum;
}

int main(void){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    if(n==kim(n)){
        printf("Its a krishnamurthy number\n");
    }else{
        printf("Its not a krishnamurthy number\n");
    }
    return 0;
}