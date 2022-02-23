#include "3-calc.h"

/**
* op_add - adds 2 numbers
* @a: 1st number
* @b: 2nd number
* Return: sum
*/

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtractes 2 numbers
 * @a: 1st num
 * @b: 2nd num
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies 2 num
 * @a: 1st num
 * @b: 2nd num
 * Return: multiply
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 num
 * @a: 1st num
 * @b: 2nd num
 * Return: divide
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo
 * @a: 1st num
 * @b: 2nd num
 * Return: modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

