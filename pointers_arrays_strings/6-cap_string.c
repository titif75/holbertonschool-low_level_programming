#include "main.h"

/**
* cap_string - Capitalizes all words of a string
* @s: The string to modify
*
* Return: Pointer to the modified string
*/
char *cap_string(char *s)
{
int i = 0;
int capitalize_next = 1;
while (s[i] != '\0')
{

if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}')
{
capitalize_next = 1;
}

else if (capitalize_next && s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
capitalize_next = 0;
}
else
{
capitalize_next = 0;
}
i++;
}
return (s);
}
