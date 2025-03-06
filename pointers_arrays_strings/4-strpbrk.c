#include "main.h"
/**
* _strpbrk - Searches a string for any of a set of bytes
* @s: The string to be searched
* @accept: The string containing the bytes to look for
*
* Return: Pointer to the byte in s that matches one
* of the bytes in accept,
* or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
