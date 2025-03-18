#include "function_pointers.h"
/**
* int_index - recherche un entier dans un tableau
* @array: le tableau d'entiers
* @size: le nombre d'éléments dans le tableau
* @cmp: pointeur vers la fonction de comparaison
*
* Return: l'index du premier élément pour lequel cmp ne retourne pas 0,
*         -1 si aucun élément ne correspond ou si size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
