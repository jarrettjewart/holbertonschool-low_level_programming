#include "holberton.h"
/**
 * leet - main function
 * @a: 1 vari
 * Return: 0
 */

char *leet(char *a)
{
	int string;
	int code;
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (string = 0; a[string] != '\0'; string++)
	{
		for (code = 0; code < 10; code++)
		{
			if (a[string] == letter[code])
			{
				a[string] = number[code];
			}
		}
	}
	return (a);
}
