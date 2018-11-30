#include <stdio.h>
 
void move(int num, char fp, char tp, char ap){
    if (num == 1){
        printf("Move disk 1 from peg %c to peg %c\n", fp, tp);
        return;
    }
    move(num - 1, fp, ap, tp);
    printf("Move disk %d from peg %c to peg %c\n", num, fp, tp);
    move(num - 1, ap, tp, fp);
}
 
int main(){
    int num;
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    move(num, 'A', 'C', 'B');
    return 0;
}