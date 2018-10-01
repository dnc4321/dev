#include<stdio.h>
int main(){
    int min,max,n=0,i=0;
    printf("Enter N: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("MAX: %d\nMIN: %d\n",max,min);
}