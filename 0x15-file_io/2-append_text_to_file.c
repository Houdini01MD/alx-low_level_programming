#include "main.h"

/**
* append_text_to_file - Create a function that creates a file.
* @filename: name of the file to create
* @text_content:  terminated string
* Return: Returns: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND | O_EXCL);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
		write(file, text_content, strlen(text_content));

	close(file);
	return (1);
}
