#include <stdio.h>
// stdout, stdin, stderr
int main(int argc, char** argv){
	FILE *entrada;
	int c;
  argv[1] = "text.txt";
	entrada = fopen(argv[1],"r");
  c = fgetc(entrada);
  int count[256];
	int countp = 0;
  int countl = 0;
  for(int i = 0; i < 256; i++){
      count[i] = 0;
    }
  while(c != EOF){
		c = fgetc(entrada);
    count[c]++;          
    if(c!=32){
      countl++;                          
    }else{
      countp++;
    } 
	}
  printf("total de palavras: %d\n",countp);
  float f;
  f = 1.0*countl/countp;
	printf("media de letras: %f\n",f);
  
  printf("Caracter e sua ocorrencia no texto:\n");
  for(int i = 65; i < 123; i++){
    if(i == 91){
      i =97;
    }
    printf("\n");
    printf("%c = %d \t",i ,count[i] );          
  }
  fclose(entrada);
	return 0;
}
