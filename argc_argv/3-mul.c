#include "main.h"
/*
* Programme qui multiplie deux nombres entiers passés
* en arguments.Si le nombre d'arguments n'est pas valide,
* le programme retourne 1.Sinon, il effectue la multiplication
* et termine sans afficher le résultat.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
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
int result = num1 *num2;
return (0);
}
