#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("ENTER THREE NUMBERS\n");
    float n[3],tmp=0;
    scanf("%f%f%f",&n[0],&n[1],&n[2]);
    tmp=n[0]+n[1]+n[2];
    printf("SUM:\t%f\n",tmp);
    printf("AVG:\t%f\n",tmp/3);
    tmp=n[0];
    for(int i=0;i<3;i++)
        if(n[i]>tmp)
            tmp=n[i];
    printf("MAX:\t%f\n",tmp);
    return 0;
}
