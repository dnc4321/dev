#include <stdio.h>

int main(void){
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int mat1[m][n], mat2[m][n];
    printf("Enter matrix 1\n");
    for(int i = 0; i < m; ++i){
        printf("Enter row %d\n", i + 1);
        for(int j = 0; j < n; ++j){
            scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }
    printf("Enter matrix 2\n");
    for(int i = 0; i < m; ++i){
        printf("Enter row %d\n", i + 1);
        for(int j = 0; j < n; ++j){
            scanf("%d", &mat2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of the matrices:\n");
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            printf("%d ", mat2[i][j] + mat1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
