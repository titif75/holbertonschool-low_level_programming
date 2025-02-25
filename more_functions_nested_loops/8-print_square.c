#include "main.h"
/**
* print_square - Fonction qui imprime un carré de taille 
* `size` avec le caractère `#`.
* @size: La taille du carré. Détermine le nombre de lignes et
* de colonnes.
*
* Si `size` est inférieur ou égal à 0, la fonction n'affiche
* qu'un retour à la ligne.
* Si `size` est supérieur à 0, la fonction imprime un carré de
* `size` lignes et `size` colonnes,
* avec chaque caractère étant un `#` et chaque ligne étant
* suivie d'un retour à la ligne.
*/
void print_square(int size)
{
int i; j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (int i = 0; i < size; i++)
{
for (int j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
