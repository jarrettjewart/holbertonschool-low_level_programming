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
	char rev;

	for (x = 0; s[x] != '\0'; x++)
	{
		continue;
	}
	for (y = x - 1; y >= x / 2; y--)
	{
		rev = s[y];
			s[y] = s[x - y - 1];
		s[x - y - 1] = rev;
	}
}
