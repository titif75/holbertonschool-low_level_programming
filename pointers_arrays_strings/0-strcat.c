#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: destination string
* @src: source string
*
* Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i = 0;
/* Find the end of dest string */
while (dest[dest_len] != '\0')
{
dest_len++;
}
/* Append src to dest, overwriting the null byte */
while (src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}
/* Add terminating null byte */
dest[dest_len + i] = '\0';
return (dest);
}
