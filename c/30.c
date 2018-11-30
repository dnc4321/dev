#include <stdio.h>
void rS();

int main(){
    printf("Enter a sentence: ");
    rS();
    printf("\n");
    return 0;
}

void rS(){
    char c;
    scanf("%c", &c);
    if( c != '\0'){
        rS();
        printf("%c",c);
    }
}