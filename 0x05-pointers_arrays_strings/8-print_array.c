#include "main.h"
/**
 * print_array - Prints array
 * @a: first var
 * @n: second var
 * Return: 0
 */
void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);
		if (array == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	putchar('\n');
}
