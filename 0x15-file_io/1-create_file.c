#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: name of the file to create
 * @text_content:  terminated string
 * Return: Returns: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, "rw");
	if (file == -1)
		return (-1);

	if (text_content != NULL)
		write(file, text_content, strlen(text_content));

	close(file);
	return (1);
}
