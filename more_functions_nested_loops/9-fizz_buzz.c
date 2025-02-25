#include <stdio.h>
/**
* main - Imprime les nombres de 1 à 100, remplaçant
* certains par Fizz, Buzz ou FizzBuzz.
* Cette fonction parcourt les nombres de 1 à 100 et affiche chaque nombre. 
* Cependant, pour les multiples de 3, elle affiche "Fizz",
* pour les multiples de 5, 
* elle affiche "Buzz", et pour les multiples de 3 et 5,
* elle affiche "FizzBuzz".
*
* Return: Toujours 0 (succès)
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
if (i != 100)
printf(" ");
else
printf("\n");
}
return (0);
}
