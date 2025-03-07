#include "main.h"
/**
* main - Multiplie deux nombres et affiche le résultat
* @argc: Nombre d'arguments
* @argv: Tableau des arguments
*
* Si le programme reçoit deux arguments, il multiplie 
* les deux et affiche le résultat.
* Si le nombre d'arguments est incorrect, il affiche
* "Error" et retourne 1.
*/
int main(int argc, char *argv[])
{
if (argc != 3) 
{
print_program_name("Error\n");
return (1);
}
int num1 = 0, num2 = 0;
for (int i = 0; argv[1][i] != '\0'; i++)
{
num1 = num1 * 10 + (argv[1][i] - '0');
}
for (int i = 0; argv[2][i] != '\0'; i++)
{
num2 = num2 * 10 + (argv[2][i] - '0');
}
int result = num1 * num2;
print_number(result);
_putchar('\n');
return (0);
}
int _putchar(char c)
{
write(1, &c, 1);
return (1);
}
void print_program_name(char *name)
{
while (*name)
{
_putchar(*name);
name++;
}
}
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar(n % 10 + '0');
}
