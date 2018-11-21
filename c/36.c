#include <stdio.h>

int len(char a[]){
    int i = 0;
    while(a[i] != '\0'){
        i++;
    }
    return i;
}
int main(void){
    char a[100], b[100];
    int newlen = 0;
    printf("Enter string A:\n");
    scanf("%s", a);
    printf("Enter string B:\n");
    scanf("%s", b);
    newlen = len(a) + len(b);
    char final[newlen+1];

    for(int i=0; i<len(a); ++i){
        final[i] = a[i];
    }
    for(int i=0;i<newlen;++i){
        final[len(a)+i] = b[i];
    }
    final[newlen] = '\0';
    printf("Generated string:\n%s\n",final);
}