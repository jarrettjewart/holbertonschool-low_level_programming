#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: main determines if number is pos, 0, or neg.
 * %d: points to the number
 * return: returns 0 for success
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 5)
    {
      printf("%d and is greater then 5")
    }
    
  return (0);
}
