#include <stdio.h>

int len(char arr[]){
    int i=0;
    while(arr[i]!='\0')
        i++;
    return i;
}

int main(){
  	char str[100], rs[100];
  	int i, j, length;
  	printf("Please Enter any String: ");
    scanf("%s",&str);
  	j = 0;
  	length = len(str);
  	for (i = length - 1; i >= 0; i--)
  		rs[j++] = str[i];
  	rs[i] = '\0';
  	printf("String after Reversing = %s\n", rs);
  	return 0;
}