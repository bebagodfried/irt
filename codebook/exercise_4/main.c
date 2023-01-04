#include <stdio.h>
#include <stdlib.h>

/**
 * Td: Exrecice2
 * ref: 28-dec.022
 * 
 */

int main() {
  // var
  int A,B, C, D, X, Y;

  // debut
  printf("Td: Exercise2\n\n");
  printf("Affichons chacune des instructions suivantes si:\nA=20, B=5, C=-10, D=2, X=12, Y=15.\n\n");
  
  A = 20;
  B = 5;
  C = -10;
  D = 2;
  X = 12;
  Y = 15;

  // (1) (5*X)+2*((3*B)+4)
  printf("(1) : (5*X)+2*((3*B)+4) = %d\n\n", (5*X)+2*((3*B)+4));

  // (2) (5*(X+2)*3)*(B+4)
  printf("(2) : (5*(X+2)*3)*(B+4) = %d\n\n", (5*(X+2)*3)*(B+4));


  // (3) A==(B=5)
  printf("(3) : A==(B=5) = %d\n\n", A==(B=5));


  // (4) A+=(X+5)
  printf("(4) : A+=(X+5) = %d\n\n", A+=(X+5));


  // (5) A!=(C*=(-D))
  printf("(5) : A!=(C*=(-D)) = %d\n\n", A!=(C*=(-D)));


  // (6) A*=C+(X-D)
  printf("(6) : A*=C+(X-D) = %d\n\n", A*=C+(X-D));


  // (7) A %= D++
  printf("(7) : A %%= D++ = %d\n\n", A %= D++);


  // (8) A %= ++D
  printf("(8) : A %%= ++D = %d\n\n", A %= ++D);


  // (9) (X++)*(A+C)
  printf("(9) : (X++)*(A+C) = %d\n\n", (X++)*(A+C));


  // (10) A=X*(B<C)+Y*!(B<C)
  printf("(10): A=X*(B<C)+Y*!(B<C) = %d\n\n", A=X*(B<C)+Y*!(B<C));


  // (11) !(X-D+C)||D
  printf("(11): !(X-D+C)||D = %d\n\n", !(X-D+C)||D);


  // (12) A&&B||!0&&C&&!D
  printf("(12): A&&B||!0&&C&&!D = %d\n", A&&B||!0&&C&&!D);

  return 0;
}