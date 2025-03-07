#include "main.h"
/**
* main - affiche le nombre d'arguments passés au programme
* @argc: nombre d'arguments
* @argv: tableau des arguments
* Return: toujours 0 (Succès)
*/
int main(int argc, char *argv[])
{
(void)argv;
_putchar((argc - 1) + '0');
_putchar('\n');
return (0);
}
