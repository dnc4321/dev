#include <stdio.h>

int power(int base, int pR){
    if (pR != 0)
        return (base*power(base, pR-1));
    else
        return 1;
}

int main(){
    int base, pR, res;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number(positive integer): ");
    scanf("%d",&pR);
    res = power(base, pR);
    printf("%d^%d = %d\n", base, pR, res);
    return 0;
}
