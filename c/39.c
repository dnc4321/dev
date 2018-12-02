#include <stdio.h>

char up(char ch){
    if(ch>='a'&&ch<='z'){
        ch=ch-32;
        return ch;
    }
    return ch;
}

int main(void){
    printf("Enter a string: ");
    char str[50];
    int i=0;
    gets(str);
    while(str[i]!='\0'){
        str[i]=up(str[i]);
        ++i;
    }
    printf("%s\n",str);
}