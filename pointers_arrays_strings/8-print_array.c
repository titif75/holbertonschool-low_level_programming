#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: array of integers
* @n: number of elements to print
* Return: void
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
