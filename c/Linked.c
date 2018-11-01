#include <stdio.h>
#include <stdlib.h>

struct node
{
	int val;
	struct node *next;
};
typedef struct node *NODE;

NODE head=NULL;

// Function Prototypes
void create(int n);
void display();

int main(void){
    printf("Enter any number \n");
    int n;
    for(;;){
        scanf("%d",&n);
        if(n<1){
            break;
        }
        create(n);
    }
    display();
    return 0;
}

void create(int n){
    NODE tmp=(NODE)malloc(sizeof(NODE));
    tmp->val=n;
    tmp->next=NULL;

    if(head==NULL){
        head=tmp;
    }else{
        NODE p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=tmp;
    }
}

void display(){
    NODE n=head;
    if(n==NULL){
        printf("List is Empty\n");
    }else{
        while(n->next!=NULL){
            printf("%d ",n->val);
            n=n->next;
        }
        printf("%d",n->val);
    }
    printf("\n");
}