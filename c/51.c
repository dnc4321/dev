#include<stdio.h>
int main(){
    float  mat[10][10], r, det;
    int i, j, k, n;
    printf("Enter order of mat: ");
    scanf("%d", &n);
    printf("Enter the mat: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%f", &mat[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j>i){
                r = mat[j][i]/mat[i][i];
                for(k = 0; k < n; k++){
                    mat[j][k] -= r * mat[i][k];
                }
            }
        }
    }
    det = 1;
    for(i = 0; i < n; i++)
        det *= mat[i][i];
    printf("The determinant of mat is: %.2f\n\n", det);
    return 0;
}
