#include "function_pointers.h"

/**
 * array_iterator - executes a function per parameter on each elemnt
 * @array: Array
 * @size: Size
 * @action: Action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
