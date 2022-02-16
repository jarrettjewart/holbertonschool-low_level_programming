#include "main.h"
/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int z = 0;
	int x;
	int y;

	if (argc < 2)
	{
		printf("%d\n", z);
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		z += atoi(argv[x]);
	}
	printf("%d\n", x);
}
printf("%d\n", z);
return (0);
}
