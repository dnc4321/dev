#include<stdio.h>

int f=-1,r=-1,c=0,q[10],tmp;

int insert(int);
int delete();
void display();

int main(void){
    re:
    printf("\n--------MENU--------\n");
    printf("1 - Insert\n2 - Delete\n3 - Display\n0 - Quit\n>>");
    scanf("%d",&tmp);
    switch (tmp)
    {
        case 1:
            printf("Insert:\t");
            scanf("%d",&tmp);
            if(insert(tmp)>0)
                printf("Inserted: %d",tmp);
            else
                printf("Overflow");
            goto re;
        case 2:
            tmp=q[f];
            if(delete()>0)
                printf("Deleted: %d",tmp);
            else
                printf("Underflow");
            goto re;
        case 3:
            display();
            goto re;
        case 0:
            printf("Quitting...\n");
            break;
        default:
            printf("Wrong input");
            goto re;
    }
    return 0;
}
int insert(int e){
    if(c>9)
        return 0;
    if(c>0)
        r=(r+1)%10;
    if(c==0){
        f++;r++;
    }
    c++;
    q[r]=e;
    return 1;
}
void display(){
    if(c<1){
        printf("Empty Queue");
    }else{
        printf("Front Index:\t%d\n",f);
        for(int i=0;i<10;i++)
            printf("%d\t",q[i]);
        printf("\nRear Index:\t%d\n",r);
    }
}
int delete(){
    if(c<1)
        return 0;
    q[f]=0;
    if(c>1)
        f=(f+1)%10;
    if(c==1){
        f=-1;r=-1;
    }
    c--;
    return 1;
}