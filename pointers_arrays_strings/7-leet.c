#include "main.h"
/**
* leet - Encodes a string into 1337.
* @s: The string to be encoded.
* Return: The encoded string.
*/
char *leet(char *s)
{
int i, j;
char replacements[] = "aAeEoOtTlL";
char codes[] = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (int j = 0; replacements[j] != '\0'; j++)
{
if (s[i] == replacements[j])
{
s[i] = codes[j];
break;
}
}
}
return (s);
}
