#include <stdlib.h>
#include "main.h"
/**
* create_array - Crée un tableau de caractères et
* l'initialise avec un caractère donné.
* @size: Taille du tableau à créer.
* @c: Caractère utilisé pour initialiser le tableau.
*
* Return: Pointeur vers le tableau ou NULL si l'allocation
* échoue ou si size est 0.
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0) // Si la taille est 0, on retourne NULL
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
