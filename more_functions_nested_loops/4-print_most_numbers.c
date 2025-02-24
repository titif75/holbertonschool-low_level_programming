#include "main.h"
/**
* print_most_numbers - imprime les chiffres de 0 à 9 sauf 2 et 4
*/
void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)  // Boucle de '0' à '9'
{
if (c != '2' && c != '4')
{
_putchar(c);
}
}
_putchar('\n');
}
