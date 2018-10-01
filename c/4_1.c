#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter The numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Original A:%d B:%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Swapped A:%d B:%d\n",a,b);
}