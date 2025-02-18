#include <stdio.h>
/**
* main - Affiche l'alphabet en minuscules
* Return: Toujours 0 (Succès)
*/
int main(void)
{
char lettre = 'a';
while (lettre <= 'z')
putchar(lettre++);
putchar('\n');
return (0);
}
