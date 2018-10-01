#include<stdio.h>
int main(){
	int n=0,i=0,j=0,tmp=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	printf("Sorted Array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}
