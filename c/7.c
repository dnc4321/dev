
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, r1, r2, rP, iP;
    printf("Enter coefficients a, b, c:\n");
    scanf("%f %f %f",&a, &b, &c);
    d = b*b-4*a*c;

    if (d > 0){
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);

        printf("r1 = %f and r2 = %f",r1 , r2);
    }
    else if (d == 0){
        r1 = r2 = -b/(2*a);

        printf("root1 = root2 = %f\n", r1);
    }
    else{
        rP = -b/(2*a);
        iP = sqrt(-d)/(2*a);
        printf("root1 = %f + %fi\nroot2 = %f - %fi\n", rP, iP, rP, iP);
    }
    return 0;
}   