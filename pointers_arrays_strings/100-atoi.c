#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the integer converted from the string
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
/* Skip non-numeric characters and handle signs */
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] == '+')
sign *= 1;
else if (s[i] >= '0' && s[i] <= '9')
break;
i++;
}
/* Process digits */
while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
{
/* Safely handle potential overflow */
if (result > 214748364)
return (sign == 1) ? 2147483647 : -2147483648;
if (result == 214748364)
{
if (sign == 1 && s[i] > '7')
return 2147483647;
if (sign == -1 && s[i] > '8')
return -2147483648;
}
result = result * 10 + (s[i] - '0');
i++;
}
return result * sign;
}
