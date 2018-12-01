#include <stdio.h>

int getWords(char str[]){
    int count=1,i=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            count++;
        }
        i++;
    }
    return count;
}

int isAlphabet(char c){
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        return 1;
    else
        return 0;
}

int getAlpha(char str[]){
    int i=0,count=0;
    while(str[i]!='\0'){
        if(isAlphabet(str[i]))
            count++;
        i++;
    }
    return count;
}

int len(char str[]){
    int count=0;
    while(str[count]!='\0'){
        count++;
    }
    return count;
}

int main(void){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Words: %d\n",getWords(str));
    printf("Total length: %d\n",len(str));
    printf("Total alphabets: %d\n",getAlpha(str));
    return 0;
}