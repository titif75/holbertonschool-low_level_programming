#include "main.h"
/**
* print_array - prints n elements of an array of integers
* @a: array of integers
* @n: number of elements to print
*
* Return: void
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != 0)
{
_putchar(',');
_putchar(' ');
}
print_number(a[i]);
}
_putchar('\n');
}
/**
* print_number - prints an integer using _putchar
* @n: integer to print
*
* Return: void
*/
void print_number(int n)
{
unsigned int num;
/* Handle negative numbers */
if (n < 0)
{
_putchar('-');
num = -n;
}
else
{
num = n;
}
/* Print recursively */
if (num / 10)
print_number(num / 10);
_putchar((num % 10) + '0');
}
