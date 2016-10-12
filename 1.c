/* Multiples of 3 and 5
 * Problem 1
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, 
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <stdio.h>

int main(int argc, char** argv) {
  int counter, total;
  counter = total = 0;
  while (counter < 1000) {
    if ( (counter % 3 == 0) || (counter % 5 == 0) ) {
	  total += counter;
	}
      counter++;
    }
	  

  printf("Anwser to Euler Problem #1:\n%d\n", total);
  return 0;
}
