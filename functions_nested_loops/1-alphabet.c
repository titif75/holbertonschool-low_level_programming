#include <unistd.h>
/* Implémentation de la fonction _putchar */
void _putchar(char c)
{
write(1, &c, 1);
}
/* Fonction pour afficher l'alphabet en minuscules */
void print_alphabet(void)
{
char letter = 'a';
/* Affiche chaque lettre de l'alphabet */
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
/* Affiche la nouvelle ligne */
_putchar('\n');
}
/* Fonction main */
int main(void)
{
print_alphabet();
return 0;
}
