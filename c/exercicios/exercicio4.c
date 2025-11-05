/**
  *  4. Faca um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
  *  2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
  *  variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
  *  tera o valor de A.
  */

  #include <stdio.h>

  void change (int *n1, int *n2) {
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
  }

  int main () {

    int n1 = 1, n2 = 2;

    printf("n1: %d - n2: %d\n", n1, n2);

    change(&n1, &n2);

    printf("n1: %d - n2: %d\n", n1, n2);


    return 0;
  }