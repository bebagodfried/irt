#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Td: Exrecice8
 * Ecrire un programme qui fait la somme des n premiers nombres premiers, n étant lu au clavier.
 * ref: 01-jan.023
 */

int main() {
  // var
  int i, j; // j: le nombre de diviseurs
  int n, x, y, sum=0; // sum: la somme des n premiers nombres premiers

  // debut
  /**
   * Algorihtme:
   * 1.saisir(n)
   * 2.faire une division succcessif pour x allant de 1 à 2n par y allant de 1 à racine(x)
   * 3.si modulo du nombre x par le diviseur y est egale à 0 (x >= 2) alors incrementer le nombre de diviseurs de 1
   * 4.si apres division successif de x par y allant de 1 à racine(x), le nombre exacte de diviseurs est egale à 2 (soit admet deux diviseurs 1 et i lui-même) alors afficher le nombre i (c-a-d le nombre i est premier)
   *   alors la somme augmente de x
   **/
  // Saisir(n)
  printf("\n");
  printf("Veillez entrée un nombre: ");
  scanf("%d", &n);

  // Divisions successif
  // Initialiser le nombre de diviseur à 1
  j=1;
  printf("La somme des %d nombres premiers est( ", n);
  for(x=1; x <= 2 * n; x++)
  {
    i = 1;
    for(y=1; y <= sqrt(x); y++)
    {
      if(x % y == 0 && x >= 2)
      {
        i++;
      }
    }
  
    if(i == 2) // Alors le nombre est premier
    {
      if(j <= n) {
        printf("%d ", x);
        sum += x;
        j++;
      }
    }
  }

  // afficher la somme des n nombres premiers premiers
  printf("): %d\n", sum);
  printf("\n");

  return 0;
}