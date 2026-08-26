#include <stdio.h>

int main(){
  int num1, num2, num3;
  printf("Digite o primeiro valor...\n");
  scanf("%d", &num1);
  printf("Digite o segundo valor...\n");
  scanf("%d", &num2);
  printf("Digite o terceiro valor...\n");
  scanf("%d", &num3);
  double media_aritmetica = (num1 + num2 + num3) / 3;
  printf("A média dos valores é... %.2f \n", media_aritmetica);
  return 0;
}
