#include "main.h"
/**
 * swap_int - swaps intergers
 * @a: 1st int
 * @b: 2nd int
 * @temp: 3rd int
 * Return: 0
 */
void swap_int(int *a, int *b, int temp)
{
	temp = *b;
	*b = *a;
	*a = temp;
}
