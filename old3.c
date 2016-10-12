/*
 * Largest prime factor
 * Problem 3
 * The prime factors of 13195 are 5, 7, 13 and 29.

 * What is the largest prime factor of the number 600851475143 ?
 */

#include <stdio.h>
#define BIGNUMBER 600851475143

int main(int argc, char *argv[])
{
  long long i, factoring;
  factoring = BIGNUMBER;
  
  for (i = 2; i*i < factoring; i++)
  {
    if (factoring % i == 0)
    {
      factoring /= i;
      i--;
    }
  }
  printf("%lld\n", factoring);

  return 0;
}
