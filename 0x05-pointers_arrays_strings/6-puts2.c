#include "main.h"
/**
 * puts2 - prints rev string with new line
 * @str: first var
 * Return: 0
 */
void puts2(char *str)
{
	int length;
	int string;

	for(length = 0; str[length] != '\0'; length++)
{
	continue;
}
for (string = 0; string < length; string += 2)
{
	+putchar(str[string]);
}
_putchar('\n');
}
