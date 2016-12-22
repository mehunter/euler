/* Special Pythagorean triplet
 * Problem 9 
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for
 * which,
 * a^2 + b^2 = c^2
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void findTriple(int sum);

int main (int argc, char* argv[]) {
  if (argc == 2) {
    findTriple( atoi(argv[1]) );
  }

  else {
    printf("This program requires a command line argument equal to the sum\n");
    printf("of a + b + c, the terms of the pythagorean triple.\n");
  }

  return 0;
}

void findTriple(int sum) {
  int a, b, c, tripleExists;
  tripleExists = FALSE;
  for (a = 1; a < sum / 3; a++) {
    for (b = a + 1; b < sum / 2; b++) {
      c = sum - a - b;
  
      if (a*a + b*b == c*c) {
        tripleExists = TRUE;
        printf("Pythagorean Triple: a = %d, b = %d, c = %d\n", a, b, c);
	printf("Sum of Triple terms: a + b + c = %d\n", a + b + c);
	printf("Product of Triple terms: a * b * c = %d\n\n", a * b * c);
       }
    }
  }

  if (tripleExists == FALSE) {
    printf("There is no Pythagorean Triple that sums to %d.\n", sum );
  }
  
}
