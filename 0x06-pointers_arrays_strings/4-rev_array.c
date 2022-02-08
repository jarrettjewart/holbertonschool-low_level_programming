#include "holberton.h"
/**
 * reverse_array - main
 * @a: 1 var
 * @n: 2 var
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int string;
	int reverse;

	for (string = n - 1; string >= n / 2; string--)
	{
		reverse = a[string];
		a[string] = a[n - 1 - string];
		a[n - 1 - string] = reverse;
	}
}
