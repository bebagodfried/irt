#include <stdio.h>
#include <stdlib.h>

/**
 * Td: Exrecice3
 * Ecrire un programme qui permet d’afficher les 10 premiers entiers qui suivent un nombre entier saisi au clavier.
 * ref: 28-dec.022
 * 
 */

int main() {
  // var
  int i, x;

  // debut
  // Saisie
  printf("Veillez entrée un nombre entier: ");
  scanf("%d", &x);

  // Traitement
  for(i=1; i <= 10; i++)
  {
    printf(" > %d\n\n", x+i);
  }
  return 0;
}