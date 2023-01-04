#include <stdio.h>
#include <stdlib.h>

/**
 * Td: Exrecice5
 * Écrire un programme qui imprime le type de lettre (voyelle ou consonne) entrée au clavier. Le traitement se fera en boucle jusqu’à ce que l’utilisateur entre le caractère #
 * ref: 28-dec.022
 */

int main() {
  // var
  int i;
  char caractere; // le caractere entrée par l'utilisateur
  char parametre; // Test logique sur un caractere saisie (1=consonne, 0=voyelle)
  char voyelle[12] = "aAeEiIoOuUyY"; // Les voyelles de la langue française

  // debut
  do
  {
    printf("Veillez entrée une lettre: ");
    caractere = getchar();
    parametre  = 0; // Reinitialiser le test logique
    
    /**
     * Algorithme:
     * + saisir un caractere
     * + si le carectere est element i du tableau voyelle[], alors le parametre passe à 1
     */
    for(i=0; i < 12; i++)
    {
      if(caractere == voyelle[i])
      {
        parametre = 1;
      }
    }
    
    if(parametre == 1)
    {
      printf("%c est une voyelle\n\n", caractere);
    } else if(caractere != '#') {
      printf("%c est une consonne\n\n", caractere);
    } else {
      break;
    }

  } while (getchar() != '#');
  return 0;
}