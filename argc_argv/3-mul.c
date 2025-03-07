#include <stdio.h>
/**
* Programme qui multiplie deux nombres.
* Usage: ./nom_du_programme nombre1 nombre2
* Imprime le résultat de la multiplication, suivi d'une
* nouvelle ligne.
* Si le programme ne reçoit pas deux arguments, il imprime
* "Error" et retourne 1.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return 1;
}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;
printf("%d\n", result);
return 0;
}
