#include "main.h"
/**
* print_diagsums - prints sums of diagonals in a square matrix
* @a: pointer to start of matrix
* @size: width of matrix column
*/
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
print_number(sum1);
_putchar(',');
_putchar(' ');
print_number(sum2);
_putchar('\n');
}
/**
* print_number - prints an integer
* @n: integer to print
*/
void print_number(int n)
{
if (n / 10)
print_number(n / 10);
_putchar(n % 10 + '0');
}
