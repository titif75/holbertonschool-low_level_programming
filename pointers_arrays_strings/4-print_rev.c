#include "main.h"
#include <unistd.h>
/**
* print_rev - Imprime une chaîne de caractères en ordre
* inverse suivie d'une nouvelle ligne
* @s: Pointeur vers la chaîne de caractères
*/
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0') 
{
length++;
}
while (length > 0) 
{
write(1, &s[length - 1], 1);
length--;
}
write(1, "\n", 1);
}
