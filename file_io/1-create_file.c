#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file with specific permissions
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    int len = 0;
    ssize_t bytes_written;

    /* Check if filename is NULL */
    if (filename == NULL)
        return (-1);

    /* Open/create file with proper permissions */
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    /* If text_content is not NULL, write it to the file */
    if (text_content != NULL)
    {
        /* Get length of text_content */
        while (text_content[len])
            len++;

        /* Write text_content to file */
        bytes_written = write(fd, text_content, len);
        
        /* Check if write failed */
        if (bytes_written == -1 || bytes_written != len)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
