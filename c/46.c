#include<stdio.h>
 
void main()
{
    char str[80], sc[10];
    int c1 = 0, c2 = 0, i, j, flag;
    printf("Enter a string: ");
    gets(str);
    printf("Enter sc substring: ");
    gets(sc);
    while (str[c1] != '\0')
        c1++;
    while (sc[c2] != '\0')
        c2++;
    for (i = 0; i <= c1 - c2; i++){
        for (j = i; j < i + c2; j++){
            flag = 1;
            if (str[j] != sc[j - i]){
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("Present!\n");
    else
        printf("Not Present -_-\n");
}