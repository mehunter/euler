/**************************************************************************/
/* Smallest multiple							  */
/* Problem 5								  */
/* 									  */
/* 2520 is the smallest number that can be divided by each of the numbers */
/* from 1 to 10 without any remainder.					  */
/* 									  */
/* What is the smallest positive number that is evenly divisible by all	  */
/* of the numbers from 1 to 20?						  */
/**************************************************************************/

#include <stdio.h>
#define LARGESTFACTOR 20

int main(int argc, char *argv[]) {
  int i, divisor, eureka;

  printf("Euler Problem #5\n");
  
  eureka = 0;
  i = LARGESTFACTOR;

  while (eureka != 1) {
    eureka = 1;
    for (divisor = LARGESTFACTOR - 1; divisor > 1; divisor-- ) {
      if (i % divisor != 0) {
	i += LARGESTFACTOR;
	eureka = 0;
      }
    }
  }

  printf("Smallest number evenly divisible by all numbers from 1 to ");
  printf("%d is %d\n", LARGESTFACTOR, i);
    
  return 0;
}
