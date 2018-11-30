#include <stdio.h>

long int mul(int n){
    if (n >= 1)
        return n*mul(n-1);
    else
        return 1;
}
int main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Factorial: %ld\n", mul(n));
    return 0;
}