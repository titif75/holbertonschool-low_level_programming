#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard
 * output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char *buffer;
    ssize_t bytes_read;
    ssize_t bytes_written;

    /* Check if filename is NULL */
    if (filename == NULL)
        return (0);

    /* Open the file for reading */
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    /* Allocate memory for buffer */
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    /* Read from file */
    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    /* Write to STDOUT */
    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    
    /* Clean up */
    free(buffer);
    close(fd);

    /* Check if write failed or didn't write all bytes */
    if (bytes_written == -1 || bytes_written != bytes_read)
        return (0);

    return (bytes_written);
}
