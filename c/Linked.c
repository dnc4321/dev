#include <stdio.h>
#include <stdlib.h>

typedef struct node *NODE;
struct node
{
	int val;
	struct node *next;
};


void p(NODE n);
int main(int argc, char const *argv[]){

	NODE n1=malloc(sizeof(NODE));
	n1->next=malloc(sizeof(NODE));
	n1->next->val=5;
	p(n1->next);
	return 0;
}

void p(NODE n){
	printf("%d\n",n->val);
}