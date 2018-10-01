#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("ENTER NUMBER of NUMBERS\n");
	int size=0;
	scanf("%d",&size);
	float n[size],max,sum=0;
	printf("ENTER THE NUMBERS\n");
	for(int i=0;i<size;i++)
		scanf("%f",&n[i]);
	max=n[0];
	for (int i = 0; i < size; ++i){
		if(n[i]>max)
			max=n[i];
		sum=sum+n[i];
	}
	printf("SUM:\t%f\nMAX:\t%f\n",sum,max);
	return 0;
}