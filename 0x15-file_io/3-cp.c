#include "main.h"

/**
 * check97 - checks number of args
 * @argc: number of args
 */

void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(ATDERR_FILENO, "Usage: cp file_from_to\n");
		exit(97);
	}
}

/**
 * check98 - checks file exists and can be read
 * @check: checks if T or F
 * @file: file_from
 * @fd_from: file desc
 * @fd_to: file desc
 */

void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check99: checks file exists and can be writtin
 * @check: check is T or F
 * @file: file_to
 * @fd_from: file desc
 * @fd_to: file desc
 */

void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check100 - checks file desc
 * @check: check is T or F
 * @fd: file desc
 */

void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies file to another file
 * @argc: numb of args
 * @argv: array of ptrs
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98((size_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR  | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((size_t)fd_to, argv[2], fd_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		check98(lenr, argv[1], fd_from, fd_to);
		lenw = write(fd_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check99(lenw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}
