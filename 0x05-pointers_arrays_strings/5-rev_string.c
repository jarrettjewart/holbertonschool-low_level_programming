#include "main.h"
/**
 * rev_string - Reverse string
 * @s: First int
 * Return: 0
 */
void rev_string(char *s)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		continue;
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
}
