#include <unistd.h>
#include "main.h"
/**
* _puts - Imprime une chaîne de caractères suivie d'une nouvelle ligne
* @str: Pointeur vers la chaîne de caractères
*/
void _puts(char *str)
{
while (*str)
{
write(1, str, 1);
str++;
}
write(1, "\n", 1);
}
