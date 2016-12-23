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

void findTriplet(int perimeter);

int main (int argc, char* argv[]) {
  if (argc == 2) {
    int perimeter;
    perimeter = atoi(argv[1]);
    findTriplet(perimeter);
  }

  else {
    printf("This program requires a command line argument for the perimeter\n");
    printf("of the right triangle, a + b + c.\n");
  }

  return 0;
}

void findTriplet(int perimeter) {
  int a, b, c, tripletFound;
  tripletFound = FALSE;
  for (a = 1; a < perimeter / 3; a++) {
    for (b = a + 1; b < perimeter / 2; b++) {
      c = perimeter - a - b;
  
      if (a*a + b*b == c*c) {
        tripletFound = TRUE;
        printf("Pythagorean Triplet: a = %d, b = %d, c = %d ", a, b, c);
	printf("with perimeter = a + b + c = %d\n", a + b + c);
	printf("Product of Triplet terms: a * b * c = %d\n\n", a * b * c);
       }
    }
  }

  if (tripletFound == FALSE) {
    printf("There is no Pythagorean Triplet with perimeter of %d.\n",
	   perimeter );
  }
  
}
