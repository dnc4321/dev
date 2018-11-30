#include <stdio.h>

int main(void){
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        ch=ch-32;
        printf("Uppercase: %c\n",ch);
        return 0;
    }
    printf("Not a lowercase character\n");
    return 1;
}