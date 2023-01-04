#include <stdio.h>
#include <stdlib.h>

/**
 * Exrecice: 2
 * ref: 19-dec.022
 * 
 */

int main() {
  // var
  int a, b, c, d=3;

  // debut
  printf("Exrecice 2:\nOn donne d=3, déterminer a,b,c\n");

  // traitement
  a = ++d;
  printf("\n (1) a = ++d");
  printf("\t => \t a = %d; b = %d, c = %d et d = %d\n", a, b, c, d);

  b = a++;
  printf("\n (2) b = a++");
  printf("\t => \t a = %d, b = %d, c = %d et d = %d\n", a, b, c, d);

  c = b--;
  printf("\n (3) c = b--");
  printf("\t => \t a = %d, b = %d, c = %d et d = %d\n", a, b, c, d);

  // affichage
  printf("\n\n Resultat:\n a = %d; b = %d; ++c = %d et --d = %d\n\n", a, b, ++c, --d);
  return 0;
}