#include<stdio.h>

int a,b;
int add(){
    printf("SUM: %d\n",(a+b));
    return 0;
}
int dif(){
    printf("Difference: %d\n",(a-b));
    return 0;
}
int div(){
    printf("Division: %f\n",(float)(a/b));
    return 0;
}
int mul(){
    printf("Multiple: %d\n",(a*b));
    return 0;
}
int main(void){
    int ch,i;
    printf("1 - Addition\n");
    printf("2 - Substraction\n");
    printf("3 - Division\n");
    printf("4 - Multiplication\n");
    printf("Enter your choice: ");
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    scanf("%d",&ch);
    switch(ch){
        case 1:
            add();
            break;
        case 2:
            dif();
            break;
        case 3:
            div();
            break;
        case 4:
            mul();
            break;
        default:
            printf("Wrong Choice!\n");
            break;
    }
}