#include "main.h"
/**
 * puts_half - prints half of string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int length;
	int s;
	int half;

	for (length = 0; str[length] != '\0'; length++)
	{
		continue;
	}
	if ((length % 2) == 0)
	{
		half = (length / 2);
	}
	else
	{
		half = ((length + 1) / 2);
	}
	for (s = half; s < length; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
