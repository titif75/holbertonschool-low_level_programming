#include "main.h"
/**
* _strcpy - copies the string pointed to by src to dest
* @dest: pointer to the destination buffer
* @src: pointer to the source string
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
/* Copy characters from src to dest until null terminator */
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
/* Copy the null terminator */
dest[i] = '\0';    
/* Return pointer to destination */
return dest;
}
