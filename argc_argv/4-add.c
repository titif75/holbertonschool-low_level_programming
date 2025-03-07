#include "main.h"
/**
* _atoi - Convert a string to an integer
* @s: String to be converted
* Return: The int converted from the string
*/
int _atoi(char *s)
{
int i, result = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] < '0' || s[i] > '9')
return (-1);
result = result * 10 + (s[i] - '0');
}
return (result);
}
/**
* print_number - Prints an integer
* @n: The integer to print
*/
void print_number(int n)
{
if (n / 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}
/**
* main - Add positive numbers
* @argc: Number of arguments
* @argv: Array of arguments
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int sum = 0, num, i;
if (argc == 1)
{
_putchar('0');
_putchar('\n');
return (0);
}
for (i = 1; i < argc; i++)
{
num = _atoi(argv[i]);
if (num == -1)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}
sum += num;
}
print_number(sum);
_putchar('\n');
return (0);
}
