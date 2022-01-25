#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main determines if number is pos, 0, or neg.
*
* %d: points to the number
* Return: returns 0 for success
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
