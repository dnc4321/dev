#include <stdio.h>

int pal(int n){
    int sum=0;
    while(n!=0){
        sum=sum*10+(n%10);
        n=n/10;
    }
    return sum;
}
int main(void){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    printf("Palindrome: %d\n",pal(n));
    return 0;
}