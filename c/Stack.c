#include <stdio.h>
#include <stdlib.h>

int push(int);
int pop();
int peek(int);
void disp();

int stk[50],top=-1;
int main(int argc, char const *argv[])
{
	int ch=0,tmp=0;
re:	printf("\n---------MENU---------\n");
	printf("\n1 - PUSH\n2 - POP\n3 - PEEK\n4 - DISPLAY STACK\n");
	printf("ENTER 0 TO EXIT\n>> ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("ENTER A NUMBER TO PUSH:\t");
			scanf("%d",&tmp);
			if(push(tmp)==0)
				printf("PUSH %d SUCCESSFUL\n",tmp);
			else
				printf("STACK OVERFLOW\n");
			goto re;
			
		case 2:
			tmp=stk[top];
			if(pop()==0)
				printf("POP %d SUCCESSFUL\n",tmp);
			else
				printf("STACK UNDERFLOW\n");
			goto re;
			
		case 3:
			printf("INDEX TO PEEK:\t");
			scanf("%d",&tmp);
			if (tmp>top||tmp<0)
				printf("BAD INDEX...\n");
			else
				printf("VALUE AT INDEX [%d]:\t%d",tmp,stk[tmp]);
			goto re;
			
		case 4:
			disp();
			goto re;
			
		case 0:
			printf("QUITTING...\n");
			break;
		default:
			printf("WRONG CHOICE!\n");
			goto re;
			
	}
	return 0;
}
int push(int e){
	if(top<49){
		stk[top+1]=e;
		top++;
	}
	else
		return -1;
	return 0;
}
int pop(){
	if(top>-1){
		top--;
	}else
		return -1;
	return 0;
}
void disp(){
	printf("\nSTACK------------>\n");
	for (int i = 0; i <= top; ++i)
		printf("%d ",stk[i]);
	printf("\nSTACK------------>\n");
}