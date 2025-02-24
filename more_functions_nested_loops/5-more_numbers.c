#include "main.h"
/**
* more_numbers - imprime les nombres de 0 à 14, dix fois, suivis d'un saut de ligne
*/void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
_putchar('0' + (j % 10));
}
_putchar('\n');
}
}
