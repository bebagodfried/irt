#include <stdio.h>
#include <stdlib.h>

int main() 
{
  // name: calc
  // desc: 

  // var
  int  digit[100];
  int  i, n, x;
  float  val;
  char sign;

  // begin
  printf("Calc v1.0.0\n\n");

  do
  {
    // Control block
    printf("Veillez entrez le nombre de valeur: ");
    scanf("%i", &n);
  }
  while (( n<=1 ) && (100<<n));

  // Execution
  // Input
  for(i=1; i<= n; i++)
  {
    printf("\nVeillez entrez le nombre %i :", i);
    scanf("%i", &x);
    digit[i] = x;
  }
  
  printf("\n[1] - Addition");
  printf("\n[2] - Soustraction");
  printf("\n[3] - Multiplication");
  printf("\n[4] - Division");
  printf("\n[5] - Moyenne");

  printf("\n\nVeillez choisir une operation: ");
  scanf("%i", &x);

  switch (x) {
    case 1:
      // Addition
      val = digit[1];
      sign= '+';

      for(i=2; i<= n; i++)
      {
        val += digit[i];
      }

      printf("resultat: ");

      i = 1;
      while (i <= n)
      {
        if (i < n)
        {
          printf("%d %c ", digit[i], sign);
        }
        else {
          printf("%d ", digit[i]);
        }

        i++;
      }
      printf("= %f\n\n", val);
      break;

    case 2:
      // Soustraction
      val = digit[1];
      sign= '-';

      for(i=2; i<= n; i++)
      {
        val -= digit[i];
      }

      printf("resultat: ");

      i = 1;
      while (i <= n)
      {
        if (i < n)
        {
          printf("%d %c ", digit[i], sign);
        }
        else {
          printf("%d ", digit[i]);
        }

        i++;
      }
      printf("= %f\n\n", val);
      break;
    case 3:
      // Multiplication
      val = digit[1];
      sign= '*';

      for(i=2; i<= n; i++)
      {
        val *= digit[i];
      }

      printf("resultat: ");

      i = 1;
      while (i <= n)
      {
        if (i < n)
        {
          printf("%d %c ", digit[i], sign);
        }
        else {
          printf("%d ", digit[i]);
        }

        i++;
      }
      printf("= %f\n\n", val);
      break;
    case 4:
      // Division
      val = digit[1];
      sign= '/';

      for(i=2; i<= n; i++)
      {
        val /= digit[i];
      }

      printf("resultat: ");

      i = 1;
      while (i <= n)
      {
        if (i < n)
        {
          printf("%d %c ", digit[i], sign);
        }
        else {
          printf("%d ", digit[i]);
        }

        i++;
      }
      printf("= %f\n\n", val);
      break;
    case 5:
      // Moyene
      val = digit[1];
      sign= ',';

      for(i=2; i<= n; i++)
      {
        val += digit[i];
      }

      printf("\nmoyenne(");

      i = 1;
      while (i <= n)
      {
        if (i < n)
        {
          printf("%d %c ", digit[i], sign);
        }
        else {
          printf("%d ", digit[i]);
        }

        i++;
      }
      printf(") = %f\n\n", val/n);
      break;
    default:
      // Afficher
      printf("Tableau [");
      i = 1;
      sign = ',';
      while (i <= n)
      {
        if (i < n)
        {
          printf("%d %c ", digit[i], sign);
        }
        else {
          printf("%d]\n", digit[i]);
        }

        i++;
      }
  }

}