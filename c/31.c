#include <stdio.h>
 
int main(void){
    long dec, q, r;
    int i, j = 0;
    char hex[100];
    printf("Enter decimal number: ");
    scanf("%ld", &dec);
    q = dec;
    while (q != 0){
        r = q % 16;
        if (r < 10)
            hex[j++] = 48 + r;
        else
            hex[j++] = 55 + r;
        q = q / 16;
    }
    for (i = j; i >= 0; i--)
        printf("%c", hex[i]);
    printf("\n");
    return 0;
}