#include "main.h"
/**
* print_diagonal - Dessine une ligne diagonale avec le caractère '\'.
* @n: Le nombre de fois que le caractère '\' doit être imprimé.
* Description: Si n est inférieur ou égal à 0,
* seul un saut de ligne est imprimé.
* Sinon, cela imprime une ligne diagonale avec
* le nombre spécifié de caractères '\'
* sur chaque ligne.
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
