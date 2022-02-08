#include "holberton.h"
/**
 * cap_string - main
 * @a: 1 var
 * Return: 0
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (a[i - 1] == ' ' ||
					a[i - 1] == '\t' ||
					a[i - 1] == '\n' ||
					a[i - 1] == ',' ||
					a[i - 1] == ';' ||
					a[i - 1] == '.' ||
					a[i - 1] == '!' ||
					a[i - 1] == '?' ||
					a[i - 1] == '"' ||
					a[i - 1] == '(' ||
					a[i - 1] == ')' ||
					a[i - 1] == '{' ||
					a[i - 1] == '}' ||
					i == 0)
			{
				a[i] = a[i] - 32;
			}
		}
	}
	return (a);
}
