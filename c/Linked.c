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
void del(int n);
int search(int n);

int main(void){
    int flag=1,ch=0,n=0;
    while(flag>0){
        printf("1 - Insert Element\n2 - Delete Element\n3 - Display List\n4 - Search\n0 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter number to insert: ");
                scanf("%d",&n);
                create(n);
                break;
            case 2:
                printf("Enter number to delete: ");
                scanf("%d",&n);
                del(n);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Enter number to search: ");
                scanf("%d",&n);
                if(search(n)>0){
                    printf("Number Found\n\n");
                }else{
                    printf("Number not Found\n\n");
                }
                break;
            case 0:
                printf("Have a good one!\n");
                exit(0);
            default:
                printf("Wrong Choice");
        }
    }
    return 0;
}

int search(int n){
    int flag=0;
    NODE tmp=head;
    while(tmp!=NULL){
        if(tmp->val==n){
            flag=1;
            break;
        }
        tmp=tmp->next;
    }
    return flag;
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
    printf("Insertion Done\n\n");
}

void del(int n){
    NODE tmp=head,prev;
    if(tmp==NULL){
        printf("List is Empty\n\n");
        return;
    }
    if(tmp!=NULL&&tmp->val==n){
        head=tmp->next;
        free(tmp);
        printf("Deletion Done\n\n");
        return;
    }else{
        printf("Could not find Element\n\n");
        return;
    }
    while(tmp!=NULL&&tmp->val!=n){
        prev=tmp;
        tmp=tmp->next;
    }
    prev->next=tmp->next;
    free(tmp);
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