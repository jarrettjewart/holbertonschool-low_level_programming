#include "main.h"/**
* print_line - function to print the line
* @n: number of spaces inputted
* Return: void
*/
void print_line(int n)
{
int line;	
if (n > 0)
{
for (line = 0; line < n; line++)
{
_putchar(95);
}
}
_putchar('\n');
}
