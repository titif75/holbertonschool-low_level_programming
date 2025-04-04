#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints error message and exits with given code
 * @message: Error message to print
 * @filename: Name of the file causing the error
 * @fd_value: File descriptor value (for close errors)
 * @exit_code: Exit code to use
 */
void error_exit(char *message, char *filename, int fd_value, int exit_code)
{
    if (exit_code == 100)
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
    else
        dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
    
    exit(exit_code);
}

/**
 * main - Copies content from one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];
    char *file_from, *file_to;

    /* Check for the correct number of arguments */
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = argv[1];
    file_to = argv[2];

    /* Open source file for reading */
    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
        error_exit("Can't read from file", file_from, 0, 98);

    /* Open/create destination file for writing with proper permissions */
    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
        error_exit("Can't write to", file_to, 0, 99);

    /* Read from source and write to destination */
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
            error_exit("Can't write to", file_to, 0, 99);
    }

    /* Check if read failed */
    if (bytes_read == -1)
        error_exit("Can't read from file", file_from, 0, 98);

    /* Close files and check for errors */
    if (close(fd_from) == -1)
        error_exit("", "", fd_from, 100);

    if (close(fd_to) == -1)
        error_exit("", "", fd_to, 100);

    return (0);
}
