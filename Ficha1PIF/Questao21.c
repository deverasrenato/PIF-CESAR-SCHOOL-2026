#include <stdio.h>

int main(){
  printf("Treinamento em programação.\n Linguagem c.\n");
  printf("Treinamento em programação.\n");
  printf("Linguagem C.\n");
  char cantosuperioresquerdo = '\xC9';
  char cantosuperiordireito = '\xBB';
  char cantoinferioresquerdo = '\xC8';
  char cantoinferiordireito = '\xBC';
  char linhahorizontal = '\xCD';
  char linhavertical = '\xBA';
   printf("%c%c%c%c\n", cantosuperioresquerdo, linhahorizontal,  linhahorizontal, linhahorizontal, linhahorizontal,  linhahorizontal, linhahorizontal, linhahorizontal, cantosuperiordireito);
   printf("%cTreinamento em programação%c\n", linhavertical, linhavertical);
   printf("%cLinguagem C.%c\n", linhavertical, linhavertical);
   printf("%c%c%c%c\n", cantoinferioresquerdo, linhahorizontal, linhahorizontal, linhahorizontal, linhahorizontal, linhahorizontal, linhahorizontal, linhahorizontal, linhahorizontal, cantoinferiordireito);
  
  return 0;
}
