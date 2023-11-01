#include "main.h"

/**
* exit_with_error - close the error file
* @file_from: the file from
* @file_to: the file to
* Return: void
*/
void exit_with_error(int file_from, int file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}

/**
*main - copies the content of a file to another file.
*@ac: int arguments
*@av: char arguments
*Return: int
*/
int main(int ac, char **av)
{
	int file_from, file_to, write_bytes, read_bytes;

	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((read_bytes = read(file_from, buffer, 1024)) > 0)
	{
		write_bytes = write(file_to, buffer, read_bytes);
		if (read_bytes != write_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (file_to == -1 || write_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	exit_with_error(file_from, file_to);
	return (0);
}
