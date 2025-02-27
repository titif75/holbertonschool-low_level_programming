#include <unistd.h>
/**
* puts2 - Affiche chaque autre caractère d'une chaîne,
* en commençant par le premier.
* @str: Pointeur vers la chaîne de caractères
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
write(1, &str[i], 1);
}
i++;
}
write(1, "\n", 1);
}
