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
	FILE *file;
	char *buffer;
	ssize_t readB, writeB;


	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}

	readB = fread(buffer, 1, letters, file);
	if (readB == 0)
	{
		return (0);
	}

	writeB = fwrite(buffer, 1, readB, stdout);
	if (writeB != readB)
	{
		return (0);
	}

	fclose(file);
	free(buffer);
	return (writeB);
}
