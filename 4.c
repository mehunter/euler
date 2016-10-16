/* Largest palindrome product
 * Problem 4
 * A palindromic number reads the same both ways. The largest palindrome made 
 * from the product of two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <stdio.h>
#define NUMBER 999

int reverse (int x);
int isPalindrome (int x);

int main(int argc, char *argv[]) {

  int i, j, product, maxPalindrome;

  printf("Euler Problem #4 \n");

  /* Loop from NUMBER downward to find the largest palindromic product */
  for (i = NUMBER; i > 1; i--) {
    for (j = NUMBER; j > i; j--) {
      product = i *  j;
      if (product > maxPalindrome && isPalindrome(product)) {
	maxPalindrome = product;
      } else {
	if (product < maxPalindrome) {
	    break;
	  }
      }
    }
  }

  printf("Largest palindrome is %d\n", maxPalindrome);
  
  return 0;
}

/* Function which returns 1 if argument is a Palindrome, else returns 0 */
int isPalindrome (int x) {
  if (reverse(x) == x) {
    return 1;
  }

  else {
    return 0;
  }
}

/* Function which returns an integer which is argument with digits reversed */
int reverse (int x) {
  int reversed;
  reversed = 0;
  
  while (x > 0) {
    reversed *= 10;
    reversed += x % 10;
    x /= 10;
  }
  return reversed;
}
