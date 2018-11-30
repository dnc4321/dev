#include <stdio.h>

int isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return 1;
    else
        return 0;
}
int isAlphabet(char c){
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        return 1;
    else
        return 0;
}

int main(void){
    int vow=0,con=0,i=0;
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    while(str[i]!='\0'){
        if(isAlphabet(str[i])){
            if (isVowel(str[i]))
                vow++;
            else
                con++;
        }
        i++;
    }
    printf("Number of vowels: %d\nNumber of Consonants: %d\n",vow,con);
    return 0;
}