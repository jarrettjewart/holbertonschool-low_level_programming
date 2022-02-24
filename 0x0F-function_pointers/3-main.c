#include "3-calc.h"
/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 4) 
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2] == NULL))
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(x, y));
	return (0);
}
