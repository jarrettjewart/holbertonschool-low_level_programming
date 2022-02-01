#include "main.h"
/**
* print_numbers - prints 0-9
*
* Return: 0
*/
void print_numbers(void)
{
int count;
for (count = '0'; count <= '9'; count++)
{
if (count != '2' && count != '4')
{
_putchar(count);
}
}
_putchar('\n');
}
