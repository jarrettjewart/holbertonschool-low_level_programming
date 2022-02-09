#include "main.h"

/**
 * factorial - main function
 * @n: 1 vari
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		reuturn (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
