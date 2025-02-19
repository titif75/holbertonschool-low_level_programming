#include "main.h"
#include <unistd.h>
/**
* print_alphabet - Fonction qui affiche l'alphabet en minuscules.
*
* Description: La fonction écrit chaque lettre de 'a' à 'z' sur la sortie
* standard, suivie d'un saut de ligne.
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
write(1, &letter, 1);
letter++;
}
write(1, "\n", 1);
}
/**
* print_alphabet_x10 - Fonction qui affiche l'alphabet en minuscules 10 fois.
*
* Description: La fonction appelle la fonction print_alphabet() 10 fois,
* affichant l'alphabet à chaque itération.
*/
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
print_alphabet();
}
}
