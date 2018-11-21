#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]){
	int ch;
re:	printf("ENTER 1 FOR CIRCLE\nENTER 2 FOR TRIANGLE\n>> ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("ENTER RADIUS OF CIRCLE\n>> ");
			float r,an;
			scanf("%f",&r);
			printf("AREA:\t%f\n",an=r*r*3.1415);
			break;
		case 2:
			printf("ENTER THREE SIDES\n");
			float a,b,c,ar,s;
			scanf("%f%f%f",&a,&b,&c);
			s=a+b+c/2;
			printf("AREA:\t%f\n",sqrt(s*(s-a)*(s-b)*(s-c)));
			break;
		default:
			printf("WRONG INPUT!!\n");
			goto re;
	}
	return 0;
}