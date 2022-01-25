#include <stdio.h>
/**
 * main - Main Entry Point
 *
 *Return: Returns the value
 */
int main(void)
{
char x;
{
for (x = 'a'; x <= 'z'; x++)
if (x != 'e' && x != 'q')
putchar(x);
putchar('\n');
}
return (0);
}
