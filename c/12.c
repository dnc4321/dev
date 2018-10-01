#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char const *argv[]){
    int n=0,i=0,sum=0;
    float avg=0;
    printf("Enter N: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter The numbers: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("SUM: %d\nAVG: %f\n",sum,(float)sum/n);
    printf("\n", );
    return 0;
}
