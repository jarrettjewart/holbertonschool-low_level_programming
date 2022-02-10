#include "main.h"
int _prime_calc(int x, int num);
/**
 * is_prime_number - main function
 * @n: 1 vari
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (_prime_calc(2, n));
}

/**
 * _prime_calc - 2nd function
 * @x: 1 int
 * @num: 2 vari
 * Return: 0
 */

int _prime_calc(int x, int num)
{
	if (num % x == 0)
	{
		return (0);
	}
	if (x == num / 2)
	{
		return (1);
	}
	return (_prime_calc(x + 1, num));
}
