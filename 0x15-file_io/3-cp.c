#include "main.h"

/**
* copy_file - print error and exit
* @src: var type char
* @dest: var type char
* Return: void
*/
void copy_file(const char *src, const char *dest)
{
	int fd_in;
	int fd_out;
	char buffer[4096];
	ssize_t bytes_read;

	fd_in = open(src, O_RDONLY);
	if (fd_in == -1)
	{
		perror("Error opening source file");
		exit(1);
	}

	fd_out = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0666);

	if (fd_out == -1)
	{
		perror("Error opening destination file");
		close(fd_in);
		exit(1);
	}

	while ((bytes_read = read(fd_in, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_out, buffer, bytes_read) != bytes_read)
		{
			perror("Error writing to destination file");
			close(fd_in);
			close(fd_out);
			exit(1);
		}
	}
	if (bytes_read == -1)
	{
		perror("Error reading from source file");
		close(fd_in);
		close(fd_out);
		exit(1);
	}
	close(fd_in);
	close(fd_out);
}

/**
* main - check the code
* @argc: var type int
* @argv: var type char
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s source destination\n", argv[0]);
		exit(1);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
