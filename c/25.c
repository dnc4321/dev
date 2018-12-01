#include<stdio.h>
int main(void){
    int i,j,k,n,tmp=0;
    printf("Enter N: ");
    scanf("%d",&tmp);
    i=0;
    j=1;
    printf("%d%d",i,j);
    for(n=0;n<=tmp;n++){
        k=i+j;
        i=j;
        j=k;
        printf("%d",k);
    }
}