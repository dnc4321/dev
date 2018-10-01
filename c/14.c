#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int dec,bin=0,base=1,i=0;
    printf("Enter a number: ");
    scanf("%d",&dec);
    while(dec>0){
        bin+=dec%2*base;
        base*=10;
        dec/=2;
    }
    printf("Binary: 0b%d\n",bin);
    return 0;
}
