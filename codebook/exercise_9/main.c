#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Td: Exrecice7
 * Ecrire un programme qui affiche les nombres premiers compris entre deux nombres entiers lus au clavier (les nombres extrêmes étant inclus).
 * ref: 31-dec.022
 */

int main() {
  // var
  int i, j, n_1, n_2, x; // x: le nombre de diviseurs

  // debut
  /**
   * Algorihtme:
   * + pour i allant du nombre n_1 à n_2, initialiser le nombre de diviseurs d'un nombre à 1 (i/i=1)
   * + pour j allant de 1 à racine(i), si modulo du nombre i par le diviseur j est egale à 0 alors incrementer le nombre de diviseurs de 1
   * + si apres division successif d'un nombre i, le nombre exacte de diviseurs est egale à 2 (soit admet deux diviseurs 1 et i lui-même) alors afficher le nombre i (c-a-d le nombre i est premier)
   */
  // Saisie
  printf("Veillez entrée un 1er nombre: ");
  scanf("%d", &n_1);
  printf("Veillez entrée un 2nd nombre: ");
  scanf("%d", &n_2);

  printf("\nLes nombres premier de %d à %d sont:\n", n_1, n_2);
  for(i=n_1; i <= n_2; i++)
  {
    // Divisions successif
    // Initialiser le nombre de diviseur à 1
    x = 1;
    for(j=1; j <= sqrt(i); j++)
    {
      if(i % j == 0 && i >= 2)
      {
        x++;
      }
    }

    // Contrôle d'affichage: afficher les nombres premier allant du nombre n_1 à n_2
    if(x == 2)
    {
      printf("%d ", i);
    }
  }
  
  printf("\n\n");
  return 0;
}