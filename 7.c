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

void nthPrime(int x);

int main(int argc, char* argv[]) {
  printf("Euler Problem 7\n");

  if (argc == 2) {
    nthPrime(atoi(argv[1]));
  }

  else {
    nthPrime(6);
  }
  
  return 0;
}

void nthPrime(int x) {
  int i;
  int *primeList;
  
  /* Initialize an array of prime numbers */
  primeList = malloc(x * sizeof(int));
  for (i = 0; i < x; i++) {
    primeList[i] = 0;
  }
  primeList[0] = 2;
  primeList[1] = 3;

  /* Fill the array with prime numbers */
  /* Actually just odd number for now */
  for (i = 2; i < x; i++) {
    primeList[i] = primeList[i-1] + 2;
  }
  
  printf("The %dth prime number is %d.\n", x, primeList[x-1] );

  free(primeList);
  
  return;
}
