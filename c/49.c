#include <stdio.h>


struct student{
    char name[100], sex[10];
    int id, marks[6];
};
typedef struct student stud;

stud getStud(){
    stud tmp;
    printf("Enter name: ");
    scanf("%s",&tmp.name);
    printf("Enter ID: ");
    scanf("%d",&tmp.id);
    printf("Enter sex: ");
    scanf("%s",&tmp.sex);
    printf("Enter the marks:\n");
    for(int i=0;i<6;++i)
        scanf("%d",&tmp.marks[i]);
    return tmp;
}

int main(void){
    getStud();
    return 0;
}
