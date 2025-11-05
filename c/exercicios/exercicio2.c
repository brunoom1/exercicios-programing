/**
 * 2. Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec¸os e ´
 * exiba o maior enderec¸o.
 */

#include <stdio.h>

int main () {

  int n1, n2 = 0;

  printf("n1: %p\n", &n1);
  printf("n2: %p\n", &n2);

  printf("\n");

  if (&n1 > &n2) {
    printf("n1: %p\n", &n1);
  } else {
    printf("n2: %p\n", &n2);
  }

  return 0;
}