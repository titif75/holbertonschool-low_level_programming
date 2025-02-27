#include <unistd.h>

/**
* puts_half - Affiche la seconde moitié d'une chaîne,
* suivie d'un saut de ligne.
* @str: Pointeur vers la chaîne de caractères
*/
void puts_half(char *str)
{
int length = 0;
int i;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
i = length / 2;
} else
{
i = (length + 1) / 2;
}
while (str[i] != '\0') 
{
write(1, &str[i], 1);
i++;
}
write(1, "\n", 1);
}
