#include <stdio.h>
#include <stdlib.h>

/**
 * Exrecice: 1
 * ref: 19-dec.022
 * 
 */

int main() {
  // var
  int x, y, z;

  // debut
  printf("Exrecice 1:\nDéterminer x,y,z\n");

  // traitement
  x = y = 10;
  printf("\n (1) x = y = 10");
  printf("\t\t => \t x = %d, y = %d et z = %d\n", x, y, z);

  z = x++;
  printf("\n (2) z = x++");
  printf("\t\t => \t x = %d, y = %d et z = %d\n", x, y, z);

  x = -x;
  printf("\n (3) x = -x");
  printf("\t\t => \t x = %d, y = %d et z = %d\n", x, y, z);

  y++;
  printf("\n (4) y++");
  printf("\t\t => \t x = %d, y = %d et z = %d\n", x, y, z);

  x = x + y - z--;
  printf("\n (5) x = x + y - z--");
  printf("\t => \t x = %d, y = %d et z = %d\n", x, y, z);


  // affichage
  printf("\n\n Resultat:\n  x = %d\n  y = %d\n  z = %d\n\n", x, y, z);
  return 0;
}