#include "main.h"
/**
* print_last_digit - program start
* @n: int
*
* Return: return (0)
*/
int print_last_digit(int n)
{
n = (n % 10);
if (n >= 0)
{
_putchar('0' + n);
return (n);
}
else if (n < 0)
{
n = (n * -1);
_putchar('0' + n);
return (n);
}
return (0);
}
