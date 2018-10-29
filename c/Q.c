#include<stdio.h>
#include<stdbool.h>

int q[10]={1,2,3},f=-1,r=-1,tmp=0,ch=0;

bool insert(int);
bool del();

int main(int argc, char const *argv[]){
    re:
    printf("\n--------MENU--------\n");
    printf("1 - Insert \n2 - Delete \n3 - Display \n4 - First \n0 - Exit\n>>");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            printf("Insert: ");
            scanf("%d",&tmp);
            if(insert(tmp))
                printf("Inserted %d",tmp);
            else
                printf("Overflow");
            goto re;

        case 2:
            tmp=q[f];
            if(del())
                printf("Deleted %d",tmp);
            else
                printf("Underflow");
            goto re;

        case 3:
            if(r==-1&&f==-1)
                printf("Empty Queue");
            if(r>-1&&f>-1){
                printf("\n<------------\n");
                for(int i=f;i<=r;i++)
                    printf("%d ",q[i]);
                printf("\n<------------\n");
            }
            goto re;
        case 4:
            printf("First is Que:\t%d",q[f]);
            goto re;
        case 0:
            printf("Quitting...\n");
            break;
        default:
            printf("Wrong Option\n");
            goto re;
    }
    return 0;
}
bool insert(int n){
    if(r>8)
        return false;
    if(r>-1&&f>-1){
        r=r+1;
        q[r]=n;
    }if(r<0||f<0){
        r++;f++;
        q[r]=n;
    }
    return true;
}
bool del(){
    if(f<r)
        f++;
    else if(f==r&&f!=-1&&r!=-1){
        r=-1;
        f=r;
    }else
        return false;
    return true;
}
