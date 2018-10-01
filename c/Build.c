#include <stdio.h>
#include <stdlib.h>


int main( int argc, char *argv[] ){
  FILE *fp;
  char path[1035];
  char cmd[]="gcc ";
  strcat(cmd,argv[1])
  fp = popen("gcc ", "r");
  if (fp == NULL) {
    printf("[DEBUG] FAILED TO RUN COMMAND\n" );
    exit(1);
  }
  while (fgets(path, sizeof(path)-1, fp) != NULL) {
    printf("%s", path);
  }
  pclose(fp);

  return 0;
}