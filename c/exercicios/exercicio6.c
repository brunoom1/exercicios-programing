#include <stdio.h>

int somaDobra (int *a, int *b) {
  *a = *a * 2;
  *b = *b * 2;
  
  return *a + *b;
}

int main () {

  int n1, n2;

  printf("a: "); 
  scanf("%d", &n1);

  printf("\n");

  printf("b: ");
  scanf("%d", &n2);

  printf("\nsoma dobro: %d\n", somaDobra(&n1, &n2));

  printf("dobro a: %d", n1); 
  printf("\n");
  printf("dobro b: %d", n2);

  return 0;
}