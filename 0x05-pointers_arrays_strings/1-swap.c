#include "main.h"
/**
 * swap_int - swaps intergers
 * @a: 1st int
 * @b: 2nd int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	a ^= b;
	b ^= a; // b ^ (a ^b) = a
	a ^= b; // (a ^ b) ^ a = b
}

