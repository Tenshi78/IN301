#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  char str[256];
  FILE *fic = fopen(argv[1],"r");
  int r,g,b,i;

  
  fgets(str, 256, fic);
  printf("%s\n" , str );
  fgets(str, 256, fic);
  printf("%s\n" , str );
  fgets(str, 256, fic);
  printf("%s\n" , str );
  
  for(i=0; i<255; i++){
    fgets(str, 256, fic);
    r = atoi(str);
    
    fgets(str, 256, fic);
    g = atoi(str);
    fgets(str, 256, fic);
    b = atoi(str);
    
  }
  

  fclose(fic);
  return 0;
}
