#include "file.h"
#include <stdio.h>

#define n 3

int main(void) {
  int a[n];
  printf("Leggere l'array (%d elementi) \n", n);
  input_array(a, n);
  ordina_array(a, n);
  output_array(a, n);

  return 0;
}