#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Td: Exrecice4
 * Ecrire un programme qui dit si un nombre entier positif entré au clavier par l’utilisateur est premier.
 * ref: 28-dec.022
 */

int main() {
  // var
  int i, n, m; // m: multiplicateur
  int Q= 0; // Nombre de diviseurs premier

  // debut
  // Saisie
  printf("Veillez entrée un nombre: ");
  scanf("%d", &n);

  /**
   * Algorithme:
   * + si n est paire (sauf 2) alors le nombre est composé
   * + sinon > pour i elements de [2; racine(n)], avec i diviseur de n alors incrementer Q.
   */

  // Tous nombre paire/multiple de 2 n'est pas premier (sauf 2)
  if(n % 2 == 0 && n != 2)
  {
    m = 2;
    printf("%d est un nombre composé ", n);
    printf(":: (%d * 2 = %d)\n", n/m, n);
  } else {
    // Un nombre premier est superieur ou egale à 2
    // i: elements de [2; racine(n)]
    i = 2;
    while(i <= sqrt(n))
    {
      // i diviseur de n alors incrementer Q
      // d'ici ont en deduit la primalité de n
      if(n % i == 0)
      {
        Q++; // Incrementer le nombre de diviseurs premier
        if(Q == 1) m = i; // Stocker le 1er diviseur de n dans m
      }

      // suivant
      i++;
    }

    if(Q == 0)
    {
      m = 1;
      printf("%d est un nombre premier ", n);
      printf(":: (%d * %d = %d)\n", n, m, n);
    } else {
      printf("%d est un nombre composé ", n);
      printf(":: (%d * %d = %d)\n", n/m, m, n);
    }
  }

  return 0;
}