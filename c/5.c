#include<stdio.h>

int main(int argc, char const *argv[]){

	int F;
	printf("ENTER A YEAR: ");
	scanf("%d",&F);
	if(F%4==0&&F%100==0&&F%400==0)
		printf("THIS IS A LEAP YEAR\n");
	else
		printf("THIS IS NOT A LEAP YEAR\n");
	return 0;
}