#include <stdio.h>

int main(void){
    printf("Enter Numbers\nEnter 0 to stop\n");
    int arr[6];
    for(int i=0;i<6;++i){
        scanf("%d",&arr[i]);
    }
    int count=0,tmp=-6969;
    for(int i=0;i<6;++i){
        count=0;
        tmp=arr[i];
        for(int j=0;j<6;++j){
            if(arr[j]==arr[i]){
                ++count;
            }if(count>1){
                arr[j]=-6969;
            }
        }
    }
    return 0;
}
