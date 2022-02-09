#include "main.h"
/**
 * _puts_recursion - recursive string
 * @s: 1 vari
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_putchar(*s++);
}
