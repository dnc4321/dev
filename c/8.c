#include <stdio.h>

int main(int argc, char const *argv[]){
	long n,f=1;
	printf("ENTER A NUMBER\n");
	scanf("%ld",&n);
	for(int i=1;i<=n;i++){
		f=f*i;
	}
	printf("FACTORIAL:\t%ld\n", f);
	return 0;
}