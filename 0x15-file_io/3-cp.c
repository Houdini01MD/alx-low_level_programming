#include "main.h"

/**
 * exit_error - print error and exit
 * @error_code: error code
 * @message: message of error
 * Return: message
*/
void exit_error(int error_code, const char *message)
{
    perror(message);
    exit(error_code);
}

/**
* main - check the code
* @argc: var type int
* @argv: var type char
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
    const char *file_from;
    const char *file_to;
    int fd_from;
    int fd_to;
    char buffer[1024];
    ssize_t bytes_read;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = argv[1];
    file_to = argv[2];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        exit_error(98, "Error: Can't read from file");
    }

    fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1)
    {
        close(fd_from);
        exit_error(99, "Error: Can't write to file");
    }

    while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        ssize_t bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            close(fd_from);
            close(fd_to);
            exit_error(99, "Error: Can't write to file");
        }
    }

    if (bytes_read == -1)
    {
        close(fd_from);
        close(fd_to);
        exit_error(98, "Error: Can't read from file");
    }

    if (close(fd_from) == -1)
    {
        close(fd_to);
        exit_error(100, "Error: Can't close fd");
    }

    if (close(fd_to) == -1)
    {
        exit_error(100, "Error: Can't close fd");
    }

    return (0);
}
