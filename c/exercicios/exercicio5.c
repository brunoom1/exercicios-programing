/**
 * 5. Fac¸a um programa que leia dois valores inteiros e chame uma func¸ao que receba estes ˜
 * 2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na ´
 * segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela.
 */

#include <stdio.h>

void maior(int *n1, int *n2) {
  int maior;
  if (*n2 > *n1) {
    maior = *n2;
    *n2 = *n1;
    *n1 = maior;
  }
}

int main () {

  int n1, n2;
  printf("Leia valor 1: \n");
  scanf("%d", &n1);
  printf("Leia valor 2: \n");
  scanf("%d", &n2);

  maior(&n1, &n2);

  printf("n1: %d\n", n1);
  printf("n2: %d\n", n2);

  return 0;
}