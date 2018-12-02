#include <stdio.h>
#include <string.h>

int main (){
    char str[100],p[10][100],*pch;
    int c=0;
    printf("Enter a name: ");
    gets(str);
    pch=strtok(str," ");
    while (pch!=NULL){
        strcpy(p[c],pch);
        pch=strtok(NULL, " ");
        c++;
    }
    for(int i=0;i<c-1;++i){
        printf("%c. ",p[i][0]);
    }
    printf("%s\n",p[c-1]);
    return 0;
}