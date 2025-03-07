#include "main.h"
/**
* main - Affiche le nom du programme
* @argc: Nombre d'arguments
* @argv: Tableau des arguments
* Return: 0 en cas de succès
*/
int main(int argc, char *argv[])
{
(void)argc;
char *prog_name = argv[0];
int i = 0;
while (prog_name[i])
{
_putchar(prog_name[i]);
i++;
}
_putchar('\n');
return (0);
}
