#include <stdio.h> 
#include <stdlib.h> // For exit() 
  
int main(int argc, char *argv[]){
    if(argc<3){
        printf("Specify both filenames please -_-\n");
        return 1;
    }
    FILE *fptr1, *fptr2;
    char c;
    fptr1 = fopen(argv[1], "r");
    fptr2 = fopen(argv[2], "w");
    c = fgetc(fptr1);
    while (c != EOF){
        fputc(c, fptr2); 
        c = fgetc(fptr1); 
    }
    printf("Contents copied to %s\n", argv[2]);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}