#include <stdio.h>
/**
* main - Programme qui affiche tous les chiffres de 0 à 9,
*        séparés par une virgule et un espace.
*
* Return: Toujours 0 (EXIT_SUCCESS)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
