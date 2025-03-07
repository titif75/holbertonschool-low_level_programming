#include "main.h"
/**
* main - multiplie deux nombres
* @argc: nombre d'arguments
* @argv: tableau des arguments
* Return: (0) si succès, (1) si erreur
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
print_number(result);
_putchar('\n');
return (0);
}
