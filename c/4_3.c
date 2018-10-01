#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the Numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Original A:%d B:%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Swapped A:%d B:%d\n",a,b);
}