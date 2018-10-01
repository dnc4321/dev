#include <stdio.h>

int main(int argc, char const *argv[])
{
	int size;
	int max,min;
	printf("ENTER NUMBER of NUMBERS\n");
	scanf("%d",&size);
	int n[size];
	printf("ENTER THE NUMBERS\n");
	for(int i=0;i<size;i++)
		scanf("%d",&n[i]);
	max=n[0];min=n[0];
	for(int i=0;i<size;++i){
		if(n[i]>max)
			max=n[i];
		if(n[i]<min)
			min=n[i];
	}
	printf("MAX:\t%d\nMIN:\t%d\n",max,min);
	return 0;
}