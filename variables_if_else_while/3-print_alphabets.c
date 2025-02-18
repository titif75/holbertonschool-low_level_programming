#include <stdio.h>
/**
* main - Affiche l'alphabet en minuscules puis en majuscules
* Return: Toujours 0 (Succès)
*/
int main(void)
{
char lettre = 'a';
while (lettre <= 'z')
putchar(lettre++);
lettre = 'A';
while (lettre <= 'Z')
putchar(lettre++);
putchar('\n');
return (0);
}
