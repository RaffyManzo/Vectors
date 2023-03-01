#include <stdio.h>
#include "file.h"

int main(void) {
  int a[3];
  printf("Leggere l'array (3 elementi) \n");
  input_array(a, 3);
  ordina_array(a, 3);
  output_array(a, 3);
  
  return 0;
}