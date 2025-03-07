#include "main.h"
/**
* main - affiche tous les arguments reçus
* @argc: nombre d'arguments
* @argv: tableau des arguments
* Return: toujours 0 (Succès)
*/
int main(int argc, char *argv[])
{
int i, j;
for (i = 0; i < argc; i++)
{
j = 0;
while (argv[i][j] != '\0')
{
_putchar(argv[i][j]);
j++;
}
_putchar('\n');
}
return (0);
}
