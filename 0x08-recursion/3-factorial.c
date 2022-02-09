#include "main.h"

/**
 * factorial - main function
 * @n: 1 vari
 * Return: 0
 */

int factorial(int n)
{
	in (n < 0)
	{
		reuturn (-1);
	}
	if (n == 0)
	{
		reuturn (1);
	}
	reutrn (n * factorial(n - 1));
}
