#include "main.h"
/**
 *  _sqrt - main functioin
 * @y: 1 vari
 * @x: 2 vari
 * Return: 0
 */

int _sqrt(int x, int y)
{
	int sqrt = y * y;

	if (sqrt > x)
		return (-1);
	if (sqrt == x)
		return (y);

	return (_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - 2nd function
 * @n: 3 vari
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}

