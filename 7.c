/*******************************************************************/
/* 10001st prime                                                   */
/* Problem 7                                                       */
/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, */
/* we can see that the 6th prime is 13.                            */
/*                                                                 */
/* What is the 10 001st prime number?                              */
/*******************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define DEBUG 0
#define TRUE 1

void nthPrime(int x);

int main(int argc, char* argv[]) {
  printf("Euler Problem 7\n");

  if (argc == 2) {
    nthPrime(atoi(argv[1]));
  }

  else {
    nthPrime(10001);
  }
  
  return 0;
}

void nthPrime(int x) {
  int i, nextPrime, primeCandidate;
  int *primeList;
  
  /* Initialize an array of prime numbers */
  primeList = malloc(x * sizeof(int));
  for (i = 0; i < x; i++) {
    primeList[i] = 0;
  }
  primeList[0] = 2;
  primeList[1] = 3;

  /* Fill the array with prime numbers */
  for (nextPrime = 2; nextPrime < x; nextPrime++) {

    /* Check last prime number + 2 to see if it is prime */
    primeCandidate = primeList[nextPrime-1] + 2;

    /* Upon completing this loop, primeCandidate is actually prime 
     * Also, don't do trial division on every number in the list.
     * If the prime squared is greater than or equal to our candidate, 
     * then we've done enough checking. */
    for (i = 1; (primeList[i] * primeList[i]) <= primeCandidate; i++) {
      if (primeCandidate % primeList[i] == 0) {
	i = 0;
	primeCandidate += 2;
      }
    }

    /* Since primeCandidate is actually the next prime, put it into
     * the array and keep going. */
    primeList[nextPrime] = primeCandidate;
  }

  /* Print the list of prime numbers for debugging */
  if (DEBUG) {
    for (i = 1; i <= x; i++) {
      printf("%d ", primeList[i-1]);
      if ( i % 10 == 0) {
	printf("\n");
      }
    }
    printf("\n");
  }

  /* Print the result */
  printf("The %dth prime number is %d.\n", x, primeList[x-1] );

  /* Free up the memory used to store the primeList */
  free(primeList);
  
  return;
}

