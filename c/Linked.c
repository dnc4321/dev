#include <stdio.h>
#include <stdlib.h>

struct node
{
	int val;
	struct node *next;
};

typedef struct node *NODE;
int main(void){
    NODE n1=(NODE)malloc(sizeof(NODE));
    n1->next=(NODE)malloc(sizeof(NODE));
    n1->next->val=5;
    return 0;
}

void create(NODE n){
    NODE tmp=n;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
}