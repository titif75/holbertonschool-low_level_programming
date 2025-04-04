#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    int len = 0;
    ssize_t bytes_written;

    /* Check if filename is NULL */
    if (filename == NULL)
        return (-1);

    /* Open file in append mode */
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    /* If text_content is not NULL, append it to the file */
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
