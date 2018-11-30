#include <stdio.h>

int iStrong(int a) {
    int sum = 0, tmp = 0;
    while (a != 0) {
        tmp = a % 10;
        sum += tmp * tmp * tmp;
        a /= 10;
    }
    return sum;
}
int main(void) {
    printf("Armstrong numbers from 100 to 1000\n");
    for (int i = 100; i < 1000; ++i)
        if (i == iStrong(i)) 
            printf("%d\n", i);
    return 0;
}