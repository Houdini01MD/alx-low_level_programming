#include "main.h"

/**
* read_textfile - reads a text file and prints.
*
* @filename: name of file
* @letters: size of letters
*
* Return: returns the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t writeB, readB;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	readB = read(file, buffer, letters);
	if (readB == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	writeB = write(STDOUT_FILENO, buffer, readB);
	if (writeB == -1 || (size_t)writeB != letters)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (writeB);
}

