#include <stdio.h>

int main(){
	int ch=0,arr[50],i=0;
	for(i=0;i<50;i++)
		arr[i]=50-i;
	printf("Enter number to search\n");
	scanf("%d",&ch);
	for(i=0;i<50;i++){
		if(arr[i]==ch){
			printf("Value Found at index: %d\n",i);
			return 0;
		}
	}
	printf("Value Not Found\n");
	return 2;
}