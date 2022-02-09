#include "main.h"
/**
* print_diagsums - main function
* @a: 1 vari
* @size: 2 vari
* Return: 0
*/

void print_diagsums(int *a, int size)
{
	unsigned int x = 0;
	unsigned int y = 0;
	int sum;

	for (sum = 0; sum < size; sum++)
	{
		x = x + a[(size * sum) + sum];
		y = y + a[(size * (sum + 1)) - (sum + 1)];
	}
	printf("%d, %d\n", x, y);
}
