#include<stdio.h>

int main(){
	float cel,fah;
	printf("ENTER TEMPERATURE IN CELSIUS\n");
	scanf("%f", &cel);
	fah=1.8*cel+32;
	printf("FAHRENHEIT:\t%f\n", fah);
	return 0;
}