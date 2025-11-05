#include <stdio.h>

/**
 * 3. Escreva um programa que contenha duas variaveis inteiras. Leia essas vari ´ aveis do ´
 * teclado. Em seguida, compare seus enderec¸os e exiba o conteudo do maior enderec¸o.
 */

int main () {

  int n1, n2;

  printf("Entre com número 1: \n");
  scanf("%d", &n1);
  printf("Entre com número 2: \n");
  scanf("%d", &n2);

  if (&n1 > &n2) {
    printf("O número %d está em posição maior", n1);
  } else {
    printf("O número %d está em posição maior", n2);
  }

  return 0;
}