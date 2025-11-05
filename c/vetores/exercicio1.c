
#include <stdio.h>
#include <stdlib.h>

void order (int *p, int total) {
  
  for (int i = 0; i < total - 1; i++) {
    int *next = p + i + 1;
    int *curr = p + i;

    if (*curr > *next) {
      int maior = *curr;
      *curr = *next;
      *next = maior;
    }
  }

  for(int i = 0; i < total - 1; i++) {
    if (*(p + i) > *(p + i + 1)) {
      // ordena mais uma vez
      order(p, total);
    }
  }
  
}

int *uniao (int *x1, int *x2, int n1, int n2, int *qtd) {
  int total = n1 + n2;
  int *x3 = (int *) malloc(sizeof(int) * total);

  int count = 0;
  for (int i = 0; i < n1; i++) {
    int v = x1[i];
    char achou = 0;
    for (int n = 0; n < total; n++) {
      if (v == x3[n]) {
        achou = 1;
      }
    }
    if (!achou) {
      x3[count++] = v;
      achou = 0;
    }
  }

  for (int i = 0; i < n1; i++) {
    int v = x2[i];
    char achou = 0;
    for (int n = 0; n < total; n++) {
      if (v == x3[n]) {
        achou = 1;
      }
    }
    if (!achou) {
      x3[count++] = v;
      achou = 0;
    }
  }

  *qtd = count;

  if (count != total) {
    return (int *) realloc(x3, sizeof(int) * count);
  }

  return x3;
}

void main () {
  int x1[] = {1, 3, 5, 6, 7};
  int x2[] = {1, 3, 4, 6, 8};
  int qtd = 0;

  int *x3 = uniao(x1, x2, 5, 5, &qtd);

  for (int i = 0; i < qtd; i++) {
    printf("%d, ", x3[i]);
  }

  order(x3, qtd);

  printf("quantidade: %d\n", qtd);

  for (int i = 0; i < qtd; i++) {
    printf("%d, ", x3[i]);
  }

  free(x3);
}