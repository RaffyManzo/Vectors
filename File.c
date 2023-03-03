#include "file.h"
#include "utils.h"
#include <stdio.h>

int minimo(int a[], int n) {
  int i, pos = 0;

  for (i = 1; i < n; i++) {
    if (a[i] < a[pos])
      pos = i;
  }

  return pos;
}

void ordina_array(int *a, int n) {
  // selection sort
  int i, min;

  for (i = 0; i < n - 1; i++) {
    // a + i verrà ricercato il minimo della parte restante
    // del vettore ovvero quella non ordinata, partente dall'indirizzo
    // base + l'indice corrente
    min = minimo(a + i, n - i) + i;
    swap(&a[i], &a[min]);
  }
}

void input_array(int *a, int n) {
  int i;

  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
}

void output_array(int *a, int n) {
  int i = 0;

  for (; i < n; i++) {
    printf("%d\t", a[i]);
  }
}