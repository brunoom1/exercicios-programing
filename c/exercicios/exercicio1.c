/**
 * Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
 * Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
 * cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
 * modificac¸ao.
 */

 #include <stdio.h>


int main () {

  int num = 10;
  double num2 = .203;
  char letra = 'a';

  int *pnum = &num;
  double *pnum2 = &num2;
  char *pletra = &letra;

  int **ppnum = &pnum;
  double **ppnum2 = &pnum2;
  char **ppletra = &pletra;

  printf("int: %d\ndouble: %f\nchar: %c\n\n", num, num2, letra);

  *pnum = 20;
  *pnum2 = .406;
  *pletra = 'b';

  printf("int: %d\ndouble: %f\nchar: %c\n\n", num, num2, letra);

  **ppnum = 30;
  **ppnum2 = .600;
  **ppletra = 'c';

  printf("int: %d\ndouble: %f\nchar: %c\n\n", num, num2, letra);

  printf("%p\n%p\n%p\n\n", pnum, pnum2, pletra);
  printf("%p\n%p\n%p\n\n", ppnum, ppnum2, ppletra);
  printf("%p\n%p\n%p\n\n", *ppnum, *ppnum2, *ppletra);

  return 0;
}