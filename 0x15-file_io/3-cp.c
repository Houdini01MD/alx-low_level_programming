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
        perror("Error: Can't close fd");
        exit(100);
    }
    if (close(file_to) == -1)
    {
        perror("Error: Can't close fd");
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
        fprintf(stderr, "Usage: cp file_from file_to\n"), exit(97);
    }

    file_from = open(av[1], O_RDONLY);
    if (file_from == -1)
    {
        perror("Error: Can't read from file");
        exit(98);
    }

    file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
    {
        perror("Error: Can't write to file");
        exit_with_error(file_from, file_to);
        exit(99);
    }

    while ((read_bytes = read(file_from, buffer, 1024)) > 0)
    {
        write_bytes = write(file_to, buffer, read_bytes);
        if (write_bytes == -1)
        {
            perror("Error: Can't write to file");
            exit_with_error(file_from, file_to);
            exit(99);
        }
        else if (read_bytes != write_bytes)
        {
            fprintf(stderr, "Error: Partial write\n");
            exit_with_error(file_from, file_to);
            exit(99);
        }
    }

    if (read_bytes == -1)
    {
        perror("Error: Can't read from file");
        exit_with_error(file_from, file_to);
        exit(98);
    }

    exit_with_error(file_from, file_to);
    return (0);
}