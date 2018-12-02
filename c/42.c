#include<stdio.h>
int main(void){
	int i,l=0,u=0,d=0,sc=0;
	char s[100];
	printf("Enter a String: ");
	scanf("%[^\n]*c",s);
	for(i=0;i<100;i++){
		if((char)s[i]==0)
		break;
		else if(((char)s[i]>=48 &&(char)s[i]<=57))
		d++;
		else if(((char)s[i]>=65 &&(char)s[i]<=90))
		u++;
		else if(((char)s[i]>=97 &&(char)s[i]<=122))
		l++;
		else
		sc++;
	}
	printf("Upper case characters = %d\nLower case characters = %d\nDigits = %d\nSpecial characters = %d",u,l,d,sc);	
    return 0;
}