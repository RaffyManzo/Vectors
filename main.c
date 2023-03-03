#include "vettore.h"
#include <stdio.h>

int main(void) {
  int n = 3, a[n];
  printf("Leggere l'array (%d elementi) \n", n);
  input_array(a, n);
  ordina_array(a, n);
  int check = ricerca(a, n, 5);
  if (check < 0)
    printf("\n\nElemento inesistente");
  else
    printf("\n\n%d si trova in posizione %d", 5, check);

  if (elimina(a, &n, 2))
    output_array(a, n);

  return 0;
}