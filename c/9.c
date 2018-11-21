#include<stdio.h>
int main(){
	printf("ENTER A NUMBER\n");
	int n,c=0,i=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if((n%i)==0)
			c++;
	}
	if(c==2)
		printf("THIS IS A PRIME NUMBER");
	else if(n==1||n==0)
		printf("THIS IS NEITHER PRIME NOR COMPOSITE");
	else
		printf("THIS IS A COMPOSITE NUMBER");
	return 0;
}
