/************************************************************************/
/* Sum square difference					        */
/* Problem 6							        */
/* The sum of the squares of the first ten natural numbers is,	        */
/* 								        */
/* 1^2 + 2^2 + ... + 10^2 = 385					        */
/* The square of the sum of the first ten natural numbers is,	        */
/* 								        */
/* (1 + 2 + ... + 10)^2 = 55^2 = 3025				        */
/* Hence the difference between the sum of the squares of the first ten */
/* natural numbers and the square of the sum is 3025 − 385 = 2640.      */
/* 								        */
/* Find the difference between the sum of the squares of the first one  */
/* hundred natural numbers and the square of the sum.		        */
/************************************************************************/

#include <stdio.h>
#define NUMBER 100

int sumOfInts(int x);
int sumOfSquares(int);

int main (int argc, char *argv[]) {
  int i, j;
  
  printf("Euler Problem #6\n");

  i = sumOfInts(NUMBER);
  i *= i;
  
  j = sumOfSquares(NUMBER);
    
  printf("%d - %d = %d\n", i, j, i - j);

  return 0;
}

/* function to return the sum of integers from 1 to x */
int sumOfInts(int x) {
  int i, sum;
  sum = 0;
  
  for (i = 1; i <= x; i++) {
    sum += i;
  }
  
  return sum;
}

/* function to return the sum of squares from 1 to x */
int sumOfSquares(int x) {
  int i, sum;
  sum = 0;

  for (i = 1; i <= x; i++) {
    sum += (i * i);
  }

  return sum;
}
