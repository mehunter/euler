/*****************************************************************/
/* Largest prime factor						 */
/* Problem 3							 */
/* 								 */
/* The prime factors of 13195 are 5, 7, 13 and 29.		 */
/* 								 */
/* What is the largest prime factor of the number 600851475143 ? */
/*****************************************************************/

#include <stdio.h>
#define NUMBER 600851475143l

int main(int argc, char *argv[]) {

  long divisor, factoring;
  factoring = NUMBER;
  divisor = 2;

  while (divisor * divisor <= factoring) {
      if (factoring % divisor == 0) {
	factoring /= divisor;
	printf("%ld ", divisor);
      }

      else {
      if (divisor == 2) {
	divisor += 1;
      }
      else {
	divisor += 2;
      }
    }
  }

  printf("%ld\n", factoring);
  
  printf("Largest prime factor of %ld is %ld\n", NUMBER, factoring);
  
  return 0;
}
