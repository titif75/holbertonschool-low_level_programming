#include "function_pointers.h"
/**
* print_name - imprime un nom en utilisant un pointeur de fonction
* @name: le nom à imprimer
* @f: pointeur vers la fonction qui imprime le nom
*
* Return: rien
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
