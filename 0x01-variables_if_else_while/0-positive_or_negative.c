#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main: main determines if number is pos, 0, or neg.
*
* %d: points to the number
<<<<<<< HEAD
* Return: Returns 0 for success
=======
* Return: returns 0 for success
>>>>>>> 362fb369fa71253f33aec5dddaa7922db7f2f014
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
